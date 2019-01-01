#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	int pdfs[2];
	char buff[30];
	pipe(pdfs);
	if(!fork()){
		printf("CHILD : Writing to the pipe.\n");
		write(pdfs[1],"ajay",5);
		close(pdfs[1]);
		printf("CHILD : Exiting\n");
	}
	else{
		wait(0);
		printf("PARENT :Reading from the pipe.\n");
		read(pdfs[0],buff,5);
		printf("\n%s\n",buff);
		close(pdfs[0]);
		printf("\nPARENT :Exiting\n");
		return 0;
	}
}         
