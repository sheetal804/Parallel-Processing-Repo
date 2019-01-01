#include<stdio.h>
#include<stdlib.h>
int main(){
	int pid;
	int rv;
	pid=fork();
	switch(pid){
		case -1:
			printf("ERROR -- something went wrong wth fork()\n");
			exit(1);
		case 0:
			printf("CHILD :This is a child process .\n");
			printf("CHILD :My PID =%d.\n",getpid());
			printf("CHILD :My Parent's PID =%d .\n",getppid());
			printf("CHILD :Enter my Exit status :");
			scanf("%d",&rv);
			printf("CHILD : I'm here.\n");
			exit(rv);
		default :
			printf("PARENT :This is a parent process .\n");
			printf("PARENT :My PID =%d.\n",getpid());
			printf("PARENT :My Child's PID =%d .\n",pid);
			printf("PARENT :I'm waiting for my child to exit()...\n");
			wait(&rv);
			printf("PARENT : I'm here.\n");
			exit(rv);
	}
	return 0;
}
			
