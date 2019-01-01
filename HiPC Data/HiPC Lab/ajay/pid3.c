#include<stdio.h>
int main(){
	if(fork()==0){
		wait(0);
		printf("I am child process, my PID= %d\n",getpid());
		printf("I am child process, my parents PID = %d\n",getppid());
	}

	else{
		printf("i am parent, my PID =%d\n", getpid());
		printf("I am parent, my parent  PID =%d\n",getppid());
	}
	return 0;
}
