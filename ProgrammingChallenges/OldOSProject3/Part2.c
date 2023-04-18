#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

#define BUFFER_SIZE 15

// Circular buffer
char buffer[BUFFER_SIZE];
int head = 0;
int tail = 0;

// Mutex and condition variables
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t buffer_not_full = PTHREAD_COND_INITIALIZER;
pthread_cond_t buffer_not_empty = PTHREAD_COND_INITIALIZER;

void *producer(void *arg)
{
  FILE *file = fopen("message.txt", "r");
  if (file == NULL)
  {
    printf("Error: Could not open file.\n");
    exit(1);
  }

  char c;
  while ((c = fgetc(file)) != EOF)
  {
    pthread_mutex_lock(&mutex);

    // Wait until buffer is not full
    while (((head + 1) % BUFFER_SIZE) == tail)
    {
      pthread_cond_wait(&buffer_not_full, &mutex);
    }

    // Write character to buffer
    buffer[head] = c;
    head = (head + 1) % BUFFER_SIZE;

    // Signal that the buffer is not empty
    pthread_cond_signal(&buffer_not_empty);

    pthread_mutex_unlock(&mutex);
  }

  fclose(file);
  return NULL;
}

void *consumer(void *arg)
{
  while (1)
  {
    pthread_mutex_lock(&mutex);
    // Wait until buffer is not empty
    while (head == tail)
    {
      pthread_cond_wait(&buffer_not_empty, &mutex);
    }

    // Read character from buffer
    char c = buffer[tail];
    tail = (tail + 1) % BUFFER_SIZE;

    // Signal that the buffer is not full
    pthread_cond_signal(&buffer_not_full);

    pthread_mutex_unlock(&mutex);

    // Check for the end of the string
    if (c == '\0')
    {
      break;
    }

    // Print the character
    putchar(c);
    fflush(stdout);
  }

  return NULL;
}

int main()
{
  pthread_t producer_thread, consumer_thread;

  // Create producer and consumer threads
  pthread_create(&producer_thread, NULL, producer, NULL);
  pthread_create(&consumer_thread, NULL, consumer, NULL);

  // Wait for the threads to finish
  pthread_join(producer_thread, NULL);
  pthread_join(consumer_thread, NULL);

  // Cleanup
  pthread_mutex_destroy(&mutex);
  pthread_cond_destroy(&buffer_not_full);
  pthread_cond_destroy(&buffer_not_empty);

  return 0;
}
