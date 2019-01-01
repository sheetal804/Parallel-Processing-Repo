#include<stdio.h>
int main(){
	int num,reverse=0,n;
	printf("Enter a number :");
	scanf("%d",&num);
	int temp= num;
	while(temp>0){
		n=temp%10;
		temp/=10;
		reverse=reverse*10+n;
	}
	printf("the reverse of %d is :%d \n",num,reverse);
	return 0;
}
