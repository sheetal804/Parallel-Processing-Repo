#include<stdio.h>
int main(){
	int i;
	for(i=0;i<100;i++){
		sleep(1);
		printf("Hello %d\n",i);
	}
	return 0;
}
