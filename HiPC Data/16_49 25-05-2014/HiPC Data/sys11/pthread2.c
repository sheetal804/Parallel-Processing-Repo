#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define NUM_THREADS 4
void *Busywork(void *t){
	int i;
	long tid;
	double result=0.0;
	tid=(long)t;
	printf("Thread %ld stating...\n",tid);
	for(i=0;i<1000000;i++)
		result+=sin(i)*tan(i);
	printf("Thread %ld done. Result=%e\n",tid,result);
	pthread_exit((void *)t);
}
int main(){
	pthread_t thread[NUM_THREADS];
	pthread_attr_t attr;
	int rc;
	long t;
	void *status;
	
	//initialise and set thread detached attributes
	
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr,PTHREAD_CREATE_JOINABLE);
	for(t=0;t<NUM_THREADS;t++){
		printf("Main : creating thread %ld\n",t);
		rc=pthread_create(&thread[t],&attr,Busywork,(void *)t);
		if(rc){
			printf("ERROR :return code from pthread_create() is %d\n",rc);
			exit(-1);
		}
	}
	
	//free attribute and wait for the other threads

	pthread_attr_destroy(&attr);
	for(t=0;t<NUM_THREADS;t++){
		rc=pthread_join(thread[t],&status);
		if(rc){
			printf("ERROR : return code from pthread_join() is %d\n",rc);
			exit(-1);
		}
		printf("Main :completed join with thread %ld having a status of %ld\n",t,(long)status);
	}
	printf("Main program Completed.Exiting...\n");
	pthread_exit(NULL);
}
		
