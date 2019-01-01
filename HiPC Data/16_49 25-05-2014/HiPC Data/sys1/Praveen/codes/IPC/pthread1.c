#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#define NUM_THREADS 7
struct thread_data{
	int thread_id;
	int sum;
	char *message;
};
struct thread_data thread_data_array[NUM_THREADS];
void *PrintHello(void *threadarg){
	struct thread_data *my_data;
	int taskid,sum;
	char *hello_msg;
	my_data=(struct thread_data *)threadarg;
	taskid=my_data->thread_id;
	sum=my_data->sum;
	hello_msg=my_data->message;
	printf("TaskID :%d\t Message :%s\n",taskid,hello_msg);
};
int main(int argc,char *argv[]){
	int t;
	int rc;
	int sum=0;
	pthread_t threads[NUM_THREADS];
	char *message[]={"sunday","monday","tuesday","wednesday","thursday","Friday","Saturday"};
	for(t=0;t<NUM_THREADS;t++){
		thread_data_array[t].thread_id=t;
		thread_data_array[t].message=message[t];
		thread_data_array[t].sum=sum;
		sum=t*10;
		rc=pthread_create(&threads[t],NULL,PrintHello,(void *)&thread_data_array[t]);
	}
	pthread_exit(NULL);
}
