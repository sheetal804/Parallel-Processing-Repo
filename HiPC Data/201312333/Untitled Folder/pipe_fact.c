#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pdfs[2],fact=1,i,n;
	char buff[30];
	pipe(pdfs);
	if(!fork()){
		printf("CHILD : Input an integer\n");
		scanf("%d",&n);
		write(pdfs[1],&n,4);
		close(pdfs[1]);
		printf("CHILD : Exiting\n");
		sleep(1);
		printf("CHILD : reading result from \n");
		read(pdfs[0],&fact,4);
		printf("\n Factorial of %d is:%d:",n,fact);
		}
	else
	{
		sleep(2);
		printf("PARENT : reading integer from \n");
		read(pdfs[0],&n,4);

		for(i=1;i<=n;i++)
		fact=fact*i;

		close(pdfs[0]);
		printf("PARENT : wriring result into pipe\n");
		write(pdfs[1],&fact,4);
		close(pdfs[1]);

		printf("\nPARENT :Exiting\n");

	}
	return 0;
}
