#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
pthread_t tid[2];
int counter=0;
pthread_mutex_t lock;
int a[10]={16,10,11,7,8,19,21,23,26,32};
int min[2];

void *doMin(void *arg){
	int i=0,n,m;
	pthread_mutex_lock(&lock);
	counter+=1;
	printf("thread %d starts\n",counter);
	n=5*counter;
	m=a[n-5];
	for(i=n-5;i<n;i++){
		if(a[i]<m)
			m=a[i];
		}
		min[counter-1]=m;
		printf("thread %d ends\n",counter);
		pthread_mutex_unlock(&lock);
		return NULL;
}	
int main(){
	int i=0;
	int err;
	if(pthread_mutex_init(& lock,NULL)!=0){
		printf("\nMutex init failed.\n");
		return 1;
	}
	while(i<2){
		err=pthread_create(&(tid[i]),NULL,&doMin,NULL);
		if(err!=0)
			printf("\ncan't create thread :[%s]",strerror(err));
		i++;
	}
	pthread_join(tid[0],NULL);
	pthread_join(tid[1],NULL);
	pthread_mutex_destroy(&lock);
	printf("MIN :%d\n",min[0]<min[1]?min[0]:min[1]);
	return 0;
}
