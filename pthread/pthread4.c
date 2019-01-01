#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<string.h>
int value;
void *my_thread(void *param)
{
	int i=atoi(param);
	printf("I am Child,passed value %d\n",i);
	value=i*i;
	pthread_exit(0);
}
int main(int argc,char *argv[])
{
	pthread_t tid;
	int rc;
	if(argc!=2)
	{
		fprintf(stderr,"usage : a.out<integer value>\n");
		exit(0);
	}
	rc=pthread_create(&tid,NULL,my_thread,argv[1]);
	if(rc!=0)
	{
		fprintf(stderr,"unable to create thread\n");
		exit(1);
	}
	pthread_join(tid,NULL);
	printf(" i am the parent square is =%d\n",value);
return 0;
}