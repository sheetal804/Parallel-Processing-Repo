#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
	char buff1[]="hello",buff2[20];
	 int fd;
	if(fork()==0)
	{
		fd=open("myfile",O_WRONLY|O_CREAT);
		write(fd,buff1,20);
		close(fd);
	}
	else
	{
		wait(0);
		fd=open("myfile",O_RDONLY);
		read(fd,buff2,20);
		printf("%s\n",buff2);			
		close(fd);
	}
	return 0;
}
