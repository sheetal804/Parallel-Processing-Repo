#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<unistd.h>
#include<linux/stat.h>
#define FIFO_FILE "MYFIFO"
int main(){
	FILE *fp;
	char buff[80];
	umask(0);
	mknod(FIFO_FILE,S_IFIFO|0666,0);
	fp=fopen(FIFO_FILE,"r");
	printf("Received string :\n");
	while(fgets(buff,80,fp)!=NULL){
		printf("   %s",buff);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
		
