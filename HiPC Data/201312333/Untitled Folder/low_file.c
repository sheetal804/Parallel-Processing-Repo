#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<linux/stat.h>
int main()
{
	int fd;
	char buff1[20]="HELLO WORLD",buff2[20];
	if(fork()==0)
	{
		fd=open("MYFILE",O_WRONLY|O_CREAT);
		write(fd,buff1,20);
		close(fd);
	}
	else
	{
		wait(0);
		fd=open("MYFILE",O_RDONLY);
		read(fd,buff2,20);
		printf("%s",buff2);
		close(fd);
	}
}		
