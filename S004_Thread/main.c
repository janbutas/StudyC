#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS 5

void *PrintHello(void *threadid){
	long tid;
	tid = (long) threadid;
	printf("Hello World ! It's me, thread #%ld!\n",tid);
	pthread_exit(NULL);
}

int main(void) {

	pthread_t threads[NUM_THREADS];
	int rc;
	long t;
	for (t = 0; t < NUM_THREADS; t++) {
		printf("In main creating thread #%ld!\n",t);
		rc = pthread_create(&threads[t],NULL,PrintHello, (void *)t);
		if (rc){
			printf("Error; return code from pthread is %d", rc);
			return 0;
		}
	}
	pthread_exit(NULL);
}

