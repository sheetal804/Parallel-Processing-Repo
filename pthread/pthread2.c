#include<string.h>
#include<stdio.h>
#include<pthread.h>
#define NUM_THREADS 5
struct thread_data
{
	int thread_id;
	int sum;
	char *message;
};
	struct thread_data thread_data_array[NUM_THREADS];
	char *msg[NUM_THREADS]={"Good morning","hello","bonjour","welcome","bye"};
	void *PrintHello(void *threadarg)
	{
		char hello_msg[20];
		int taskid,sum;
		struct thread_data *my_data;
		my_data=(struct thread_data*)threadarg;
		taskid=my_data->thread_id;
		sum=my_data->sum;
		strcpy(hello_msg,my_data->message);
		printf("I am task id %d\t and sum is %d\t and my task message is %s\n",taskid,sum,hello_msg);
	}
	int main()
	{
		pthread_t threads[NUM_THREADS];
		long t;
		int rc,p;	
		printf("%s\t%s\n",msg[0],msg[1]);
		for(t=0;t<NUM_THREADS;t++)
		{
					
			thread_data_array[t].thread_id=t;
			p=t*10;
			thread_data_array[t].message=msg[t];
			thread_data_array[t].sum=p;
			rc=pthread_create(&threads[t],NULL,PrintHello,(void*)&thread_data_array[t]);
		}
			
		pthread_exit(NULL);
		return 0;
	}


