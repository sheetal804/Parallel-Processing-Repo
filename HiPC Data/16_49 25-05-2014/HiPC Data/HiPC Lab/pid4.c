#include<stdio.h>
int main(){
	if(fork()==0){
		printf("I am child process, my PID= %d\n",getpid());
		printf("I am child process, my parents PID = %d\n",getppid());
		sleep(2);
		printf("i m child. my pid is %d\n",getpid());
		printf("i m child my parent pid is %d\n",getppid());
	}

	else{
		sleep(1);
		printf("i am parent, my PID =%d\n", getpid());
		printf("I am parent, my parent  PID =%d\n",getppid());
	}
	return 0;
}
