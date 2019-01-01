#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
pthread_t tid[2];
int counter=0;
pthread_mutex_t lock;
void* dosomething(void *arg)
{
	pthread_mutex_lock(&lock);
	unsigned long i=0;
	counter+=1;
	printf("\n job %d started\n",counter);
	for(i=0;i<10000;i++);
	printf("job finished counter is %d\n",counter);
	pthread_mutex_unlock(&lock);
}
int main()
{
	int i=0;
	int err;
	if(pthread_mutex_init(&lock,NULL)!=0)
	{
		printf("\n mutex initialization failed\n");
		return 1;
	}

		while(i<2)
		{
			err=pthread_create(&tid[i],NULL,&dosomething,NULL);
			if(err!=0)	
			{
				printf("errror pthread not created\n");
			}
			i++;
		}
	
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_mutex_destroy(&lock);
	
	return 0;
}
