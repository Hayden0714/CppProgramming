#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/time.h>
#include <sys/param.h>
#include <sched.h>

#define K 200

struct Node
{
  int data;
  struct Node *next;
};

struct list
{
  struct Node *header;
  struct Node *tail;
};

struct thread_args
{
  int cpu_id;
  struct list *local_list;
};

void bind_thread_to_cpu(int cpuid)
{
  cpu_set_t mask;
  CPU_ZERO(&mask);

  CPU_SET(cpuid, &mask);
  if (sched_setaffinity(0, sizeof(cpu_set_t), &mask))
  {
    fprintf(stderr, "sched_setaffinity");
    exit(EXIT_FAILURE);
  }
}

struct Node *generate_data_node()
{
  struct Node *ptr;
  ptr = (struct Node *)malloc(sizeof(struct Node));

  if (NULL != ptr)
  {
    ptr->next = NULL;
  }
  else
  {
    printf("Node allocation failed!\n");
  }
  return ptr;
}

void *producer_thread(void *arg)
{
  bind_thread_to_cpu(((struct thread_args *)arg)->cpu_id);

  struct Node *ptr;
  int counter = 0;
  struct list *local_list = ((struct thread_args *)arg)->local_list;

  while (counter < K)
    while (counter < K)
    {
      ptr = generate_data_node();

      if (NULL != ptr)
      {
        ptr->data = 1;

        if (local_list->header == NULL)
        {
          local_list->header = local_list->tail = ptr;
        }
        else
        {
          local_list->tail->next = ptr;
          local_list->tail = ptr;
        }
      }
      ++counter;
    }
}

void merge_lists(struct list *global_list, struct list *local_list)
{
  if (global_list->header == NULL)
  {
    global_list->header = local_list->header;
    global_list->tail = local_list->tail;
  }
  else
  {
    global_list->tail->next = local_list->header;
    global_list->tail = local_list->tail;
  }
}

int main(int argc, char *argv[])
{
  int i, num_threads;
  int NUM_PROCS;
  int *cpu_array = NULL;
  struct Node *tmp, *next;
  struct timeval starttime, endtime;

  if (argc == 1)
  {
    printf("ERROR: please provide an input arg (the number of threads)\n");
    exit(1);
  }

  num_threads = atoi(argv[1]);
  pthread_t producer[num_threads];
  NUM_PROCS = sysconf(_SC_NPROCESSORS_CONF);
  if (NUM_PROCS > 0)
  {
    cpu_array = (int *)malloc(NUM_PROCS * sizeof(int));
    if (cpu_array == NULL)
    {
      printf("Allocation failed!\n");
      exit(0);
    }
    else
    {
      for (i = 0; i < NUM_PROCS; i++)
        cpu_array[i] = i;
    }
  }

  struct list *global_list = (struct list *)malloc(sizeof(struct list));
  if (NULL == global_list)
  {
    printf("End here\n");
    exit(0);
  }
  global_list->header = global_list->tail = NULL;

  struct thread_args args[num_threads];
  struct list local_lists[num_threads];

  for (i = 0; i < num_threads; i++)
  {
    local_lists[i].header = local_lists[i].tail = NULL;
    args[i].cpu_id = cpu_array[i % NUM_PROCS];
    args[i].local_list = &local_lists[i];
  }

  gettimeofday(&starttime, NULL);
  for (i = 0; i < num_threads; i++)
  {
    pthread_create(&(producer[i]), NULL, producer_thread, &args[i]);
  }

  for (i = 0; i < num_threads; i++)
  {
    if (producer[i] != 0)
    {
      pthread_join(producer[i], NULL);
      merge_lists(global_list, &local_lists[i]);
    }
  }

  gettimeofday(&endtime, NULL);

  if (global_list->header != NULL)
  {
    next = tmp = global_list->header;
    while (tmp != NULL)
    {
      next = tmp->next;
      free(tmp);
      tmp = next;
    }
  }
  if (cpu_array != NULL)
    free(cpu_array);

  printf("Total run time is %ld microseconds.\n", (endtime.tv_sec - starttime.tv_sec) * 1000000 + (endtime.tv_usec - starttime.tv_usec));
  return 0;
}
