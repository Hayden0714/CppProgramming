#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define NUM_THREADS 4

typedef struct
{
  char *s1;
  char *s2;
  int start;
  int end;
  int *global_count;
  pthread_mutex_t *mutex;
} ThreadData;

void readf(char *s1, char *s2)
{
  FILE *f = fopen("strings.txt", "r");
  if (f == NULL)
  {
    printf("Error opening file.\n");
    exit(1);
  }
  fscanf(f, "%s %s", s1, s2);
  fclose(f);
}

void *count_substrings(void *arg)
{
  ThreadData *data = (ThreadData *)arg;
  int local_count = 0;
  int s2_len = strlen(data->s2);

  for (int i = data->start; i <= data->end - s2_len + 1; i++)
  {
    if (strncmp(data->s1 + i, data->s2, s2_len) == 0)
    {
      local_count++;
    }
  }

  pthread_mutex_lock
      pthread_mutex_lock(data->mutex);
  *(data->global_count) += local_count;
  pthread_mutex_unlock(data->mutex);

  return NULL;
}

int main()
{
  char s1[100], s2[50];
  readf(s1, s2);
  int n1 = strlen(s1);
  int n2 = strlen(s2);
  int global_count = 0;
  pthread_t threads[NUM_THREADS];
  ThreadData thread_data[NUM_THREADS];
  pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

  int range = n1 - n2 + 1;
  int chunk_size = range / NUM_THREADS;

  for (int i = 0; i < NUM_THREADS; i++)
  {
    thread_data[i].s1 = s1;
    thread_data[i].s2 = s2;
    thread_data[i].start = i * chunk_size;
    thread_data[i].end = (i == NUM_THREADS - 1) ? range - 1 : (i + 1) * chunk_size - 1;
    thread_data[i].global_count = &global_count;
    thread_data[i].mutex = &mutex;
    pthread_create(&threads[i], NULL, count_substrings, (void *)&thread_data[i]);
  }

  for (int i = 0; i < NUM_THREADS; i++)
  {
    pthread_join(threads[i], NULL);
  }

  printf("Number of matching substrings: %d\n", global_count);
  return 0;
}
