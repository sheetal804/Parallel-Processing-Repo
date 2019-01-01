#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#define file_name "myfile.txt"
int main(){
	int fp;
	char buff[80],buff1[80];
	if(fork()){
		wait(0);
		printf("PARENT PROCESS\n");
		fp=open(file_name,O_RDONLY);
		printf("Received string is:\n");
		read(fp,buff1,sizeof(buff1));
		printf("%s\n",buff1);
		close(fp);
		printf("PARENT EXITING\n");	
	}
	else{
		printf("CHILD PROCESS\n");
		fp=open(file_name,O_WRONLY|O_CREAT);
		printf("Enter the string :");
		scanf("%s",buff);
		write(fp,buff,sizeof(buff));
		close(fp);
		printf("CHILD EXITING\n");
	}
return 0;
}
