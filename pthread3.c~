#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<pthread.h>
#define NUM_THREADS 4
void *busyWork(void *t)
{
	int i;
	long tid;
	double result=0.0;
	tid=(long)t;
	printf("Thread %ld starting ...\n",tid);
	for(i=0;i<1000000;i++)
	{
		result+=(sin(i)*tan(i));
	}
	printf("Thread %ld\t done result = %lf\n",tid,result);
}
	

	int main()
	{
		void *status;
		pthread_t threads[NUM_THREADS];
		pthread_attr_t attr;
		long t;
		int rc;
		pthread_attr_init(&attr);
		pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);
		for(t=0;t<NUM_THREADS;t++)
		{
			rc=pthread_create(&threads[t],&attr,busyWork,(void*)t);
			if(rc)
			{
				printf("Error in code from pthread_create() is %d\n",rc);
				exit(1);
			}
		}



		pthread_attr_destroy(&attr);
		for(t=0;t<NUM_THREADS;t++)
		{
			rc=pthread_join(threads[t],&status);
			if(rc)
			{
				printf("Error in code from pthread_create() is %d\n",rc);
				exit(1);
			}
			printf("main: completed joining of threads %ld having a status %ld\n",t,(long)status);
		}
	printf("main program completed exiting\n");
		pthread_exit(NULL);
	return 0;
	}
