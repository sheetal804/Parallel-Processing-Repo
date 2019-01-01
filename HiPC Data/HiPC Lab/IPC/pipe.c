#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	char buff[30];
	int p[2];
	pipe(p);
	if(!fork()){
		printf("CHILD : Writing to the pipe.\n");
		write(p[1],"Test",5);
		close(p[1]);
		printf("CHILD :\nExiting...\n\n");
	}
	else{
		wait(0);
		printf("PARENT : Reading from the pipe.\n");
		read(p[0],buff,5);
		printf("%s\n",buff);
		close(p[0]);
		printf("CHILD :\nExiting...\n\n");
		return 0;
	}
}
