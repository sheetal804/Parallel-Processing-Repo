#include<stdio.h>
int main()
{
	if(fork()==0)
	{	
		wait(0);
		printf("chid pid :%d\n",getpid());
		printf("parent of child pid :%d\n",getppid());
	}
	
	else
	{
			
	printf("parent pid :%d\n",getpid());
		printf("parent's parent pid :%d\n",getppid());
	}
return 0;
}
		
