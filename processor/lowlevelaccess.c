#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
	char buff1[20],buff2[20];
	FILE descriptor
	int fd;
	if(fork()==0)
	{
		fd=open("myfile",O_WRONLY|O_CREAT);
		write(fd,buff1,120);
		close(fd);
	}
	else
	{
		wait(0);
		read(fd,buff2,30)
		printf("%s",buff2);			
		fclose(fd);
	}
	return 0;
}
