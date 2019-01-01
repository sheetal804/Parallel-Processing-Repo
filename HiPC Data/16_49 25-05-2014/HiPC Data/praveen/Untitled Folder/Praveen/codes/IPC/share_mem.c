#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
void child(int SharedMem[]){
	printf("%d\t%d\t%d\t%d\n",SharedMem[0],SharedMem[1],SharedMem[2],SharedMem[3]);
}
int main(int argc, char *argv[]){
	int shmID,*shmPTR,status;
	pid_t pid;
	shmID=shmget(IPC_PRIVATE,4*sizeof(int),IPC_CREAT|0666);
	shmPTR=(int *)shmat(shmID,NULL,0);
	shmPTR[0]=atoi(argv[1]);
	shmPTR[1]=atoi(argv[2]);
	shmPTR[2]=atoi(argv[3]);
	shmPTR[3]=atoi(argv[4]);
	if((pid=fork())==0){
		child(shmPTR);
		exit(0);
	}
	wait(&status);
	shmdt((void *)shmPTR);
	shmctl(shmID,IPC_RMID,NULL);
	exit(0);
}	
