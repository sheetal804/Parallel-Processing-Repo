#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<linux/stat.h>
#include<sys/ipc.h>
#include<sys/shm.h>
void child(int sharedMEM[])
{
	printf("%d\t%d\t%d\t%d\n",sharedMEM[0],sharedMEM[1],sharedMEM[2],sharedMEM[3]);
}
void main(int argc,char *argv[])
{
	int ShmID,*ShmPTR,status;
	pid_t pid;
	ShmID=shmget(IPC_PRIVATE,4*sizeof(int),IPC_CREAT|0666);
	ShmPTR=(int*)shmat(ShmID,NULL,0);
	ShmPTR[0]=atoi(argv[1]);
	ShmPTR[1]=atoi(argv[2]);
	ShmPTR[2]=atoi(argv[3]);
	ShmPTR[3]=atoi(argv[4]);
	if((pid=fork())==0){
	child(ShmPTR);
	//exit(0);
	}
	wait(&status);
	shmdt((void*)ShmPTR);
	shmctl(ShmID,IPC_RMID,NULL);
	//exit(0);
	}
