#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h> 
#include<unistd.h>
pthread_t tid[3];
int counter=0,i;
pthread_mutex_t lock;
int a[30];

int sum[3];



void* doMin(void *arg)
{
	for(i=0;i<30;i++)
	{
		a[i]=2;
	}
	int i=0,n,s;
	pthread_mutex_lock(&lock);
	counter+=1;
	printf("thread %d starts\n",counter);
	n=10*counter;
	s=0;
	for(i=n-10;i<n;i++)
	{
		s=s+a[i];
	}
	sum[counter-1]=s;
	printf("thread %d\t ends \n",counter);
	pthread_mutex_unlock(&lock);
	return NULL;
}
	int main()
	{
		int i=0;
		int err;
		if(pthread_mutex_init(&lock,NULL)!=0)
		{
			printf("\n mutex init failed \n");
			return 1;
		}
	while(i<3)
	{
		err=pthread_create(&tid[i],NULL,&doMin,NULL);
		if(err!=0)
		printf("thread cannot be created  [%s]",strerror(err));
		i++;
	}
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_join(tid[2],NULL);
	pthread_mutex_destroy(&lock);
	printf("SUM =%d\n",(sum[0]+sum[1]+sum[2]));
	return 0;
}

