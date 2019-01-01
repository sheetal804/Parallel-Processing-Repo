#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
int value;
void *my_thread(void * param);
int main(int argc, char *argv[]){
	pthread_t tid;
	int retcode;
	if(argc!=2){
		fprintf(stderr,"usage: a.out<integer value>\n");
		exit(0);
	}
	retcode=pthread_create(&tid,NULL,my_thread,argv[1]);
	if(retcode!=0){
		fprintf(stderr,"unable to create thread\n");
		exit(1);
	}
	pthread_join(tid,NULL);
	printf("I am the parent :square= %d\n",value);
}
void * my_thread(void *param){
	int i=atoi(param);
	printf("i am child, passed value %d\n",i);
	value=i*i;
	pthread_exit(0);
}
		
