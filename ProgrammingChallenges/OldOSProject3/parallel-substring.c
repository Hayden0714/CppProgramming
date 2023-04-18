#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>

#define MAX 1024
#define NUM_THREADS 4

int total = 0;
int n1, n2;
char *s1, *s2;
FILE *fp;
pthread_mutex_t total_mutex;
pthread_mutex_t idx_mutex;
int next_idx = 0;

typedef struct
{
  int thread_id;
} ThreadData;

int readf(FILE *fp)
{
  if ((fp = fopen("strings.txt", "r")) == NULL)
  {
    printf("ERROR: can't open string.txt!\n");
    return 0;
  }
  s1 = (char *)malloc(sizeof(char) * MAX);
  if (s1 == NULL)
  {
    printf("ERROR: Out of memory!\n");
    return -1;
  }
  s2 = (char *)malloc(sizeof(char) * MAX);
  if (s2 == NULL)
  {
    printf("ERROR: Out of memory\n");
    return -1;
  }
  /*read s1 s2 from the file*/
  s1 = fgets(s1, MAX, fp);
  s2 = fgets(s2, MAX, fp);
  n1 = strlen(s1) - 1; /*length of s1*/
  n2 = strlen(s2) - 1; /*length of s2*/

  if (s1 == NULL || s2 == NULL || n1 < n2) /*when error exit*/
    return -1;
}

void *num_substring_thread(void *data)
{
  ThreadData *thread_data = (ThreadData *)data;
  int i, j, k;
  int count;
  int local_total = 0;
  int local_idx;

  while (1)
  {
    pthread_mutex_lock(&idx_mutex);
    if (next_idx <= n1 - n2)
    {
      local_idx = next_idx;
      next_idx++;
    }
    else
    {
      pthread_mutex_unlock(&idx_mutex);
      break;
    }
    pthread_mutex_unlock(&idx_mutex);

    count = 0;
    for (j = local_idx, k = 0; k < n2; j++, k++)
    {
      if (*(s1 + j) != *(s2 + k))
      {
        break;
      }
      else
      {
        count++;
      }
      if (count == n2)
      {
        local_total++;
      }
    }
  }

  pthread_mutex_lock(&total_mutex);
  total += local_total;
  pthread_mutex_unlock(&total_mutex);

  return NULL;
}

int main(int argc, char *argv[])
{
  int count;
  pthread_t threads[NUM_THREADS];
  ThreadData thread_data[NUM_THREADS];

  readf(fp);

  pthread_mutex_init(&total_mutex, NULL);
  pthread_mutex_init(&idx_mutex, NULL);

  for (int i = 0; i < NUM_THREADS; i++)
  {
    thread_data[i].thread_id = i;
    pthread_create(&threads[i], NULL, num_substring_thread, (void *)&thread_data[i]);
  }

  for (int i = 0; i < NUM_THREADS; i++)
  {
    pthread_join(threads[i], NULL);
  }

  count = total;
  printf("The number of substrings is: %d\n", count);

  pthread_mutex_destroy(&total_mutex);
  pthread_mutex_destroy(&idx_mutex);

  return 1;
}
