#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 
#include<pthread.h>

#define NUM_THREADS 5

struct thread_data
{
	int thread_id;
	int sum;
	char *message;
};

struct thread_data thread_data_array[NUM_THREADS];
char *msg[NUM_THREADS]={"Good morning","hello world","Hot weather","23rd May","year 2015"}; 

void *PrintHello(void *threadarg)
{
	char hello_msg[20];
	long sum,taskid;
	
	struct thread_data *mydata;
	mydata=(struct thread_data*)threadarg;
	taskid=mydata->thread_id;
	sum=mydata->sum;
	strcpy(hello_msg,mydata->message);
	printf("I am task id%ld, sum = %ld\t message =%s\n",taskid,sum, hello_msg);
}	
int main(int argc,char *argv[])
{
        pthread_t threads[NUM_THREADS];  
	long t; int rc;
	printf("%s %s\n",msg[0],msg[1]);
	for(t=0;t<NUM_THREADS;t++){ 
	    thread_data_array[t].thread_id=t;
	    thread_data_array[t].sum=t*10; 
	    thread_data_array[t].message=msg[t]; 
	    rc= pthread_create(&threads[t],NULL,PrintHello,(void*)&thread_data_array[t]);
	    if(rc!=0){ 
	        printf("Error in creating pthread %ld\n",t); 
	        exit(1);
	     }
	     printf("Successfully created Thread %ld\n",t); 
	}
	pthread_exit(NULL);
	return 0; 
}
