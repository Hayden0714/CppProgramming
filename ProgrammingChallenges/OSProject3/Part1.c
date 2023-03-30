#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#define MAX 1024
#define NUM_THREADS 4

int total = 0;
int n1, n2;
char *s1, *s2;
FILE *fp;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

typedef struct
{
  int start;
  int stride;
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
  s1 = fgets(s1, MAX, fp);
  s2 = fgets(s2, MAX, fp);
  n1 = strlen(s1) - 1;
  n2 = strlen(s2) - 1;

  if (s1 == NULL || s2 == NULL || n1 < n2)
    return -1;
}

void *num_substring(void *arg)
{
  ThreadData *data = (ThreadData *)arg;
  int i, j, k;

  for (i = data->start; i <= n1 - n2; i += data->stride)
  {
    int count = 0;
    for (j = i, k = 0; k < n2; j++, k++)
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
        pthread_mutex_lock(&mutex);
        total++;
        pthread_mutex_unlock(&mutex);
      }
    }
  }

  return NULL;
}

int main(int argc, char *argv[])
{
  readf(fp);

  pthread_t threads[NUM_THREADS];
  ThreadData thread_data[NUM_THREADS];

  for (int i = 0; i < NUM_THREADS; i++)
  {
    thread_data[i].start = i;
    thread_data[i].stride = NUM_THREADS;
    pthread_create(&threads[i], NULL, num_substring, (void *)&thread_data[i]);
  }

  for (int i = 0; i < NUM_THREADS; i++)
  {
    pthread_join(threads[i], NULL);
  }

  printf("The number of substrings is: %d\n", total);
  free(s1);
  free(s2);
  fclose(fp);
  return 0;
}