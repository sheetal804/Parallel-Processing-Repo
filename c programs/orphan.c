#include<stdio.h>
int main()
{
	if(fork()==0)
	{	
		
		printf("child pid :%d\n",getpid());
		printf("parent of child pid :%d\n",getppid());
		sleep(1);
		printf("child pid :%d\n",getpid());
		printf("parent of child pid :%d\n",getppid());
			
		}
	
	else
	{
	wait(0);		
	printf("parent pid :%d\n",getpid());
	printf("parent's parent pid :%d\n",getppid());
	}
return 0;
}
		
