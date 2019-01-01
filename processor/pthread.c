#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

#define NUM_THREADS 6

void* PrintHello(void *threadid)
{
	long tid;
	tid=(long)threadid;
	printf("Hello Worls! It's me, thread #%ld!\n",tid);
	pthread_exit(NULL);
}
	int main(int argc,char *argv[])
	{
		pthread_t threads[NUM_THREADS];
		int rc;
		long t;
                printf("----%d----\n",NUM_THREADS);  
		for(t=0;t<NUM_THREADS;t++)
		{
			printf("IN main:creating thread %ld\n",t);
			rc=pthread_create(&threads[t],NULL,PrintHello,(void*)t);
			if(rc)
			{
				printf("ERROR return code from pthread_create is %d\n",rc);
				exit(-1);
			}
		}
	pthread_exit(NULL);
return 0;
}

