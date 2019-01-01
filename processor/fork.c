#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int p[2];
	char a[20];
	pipe(p);
	if(!fork())
	{
		printf("child is writing\n");
		write(p[1],"sheetal",7);
		close(p[1]);
		printf("\nchild is exiting\n");
	}
	else
	{
		wait(0);
		printf("parent is reading\n");
		read(p[0],a,7);	
		printf("The string entered by child is :-  %s\n",a);
		close(p[0]);
	}
	return 0;
}
