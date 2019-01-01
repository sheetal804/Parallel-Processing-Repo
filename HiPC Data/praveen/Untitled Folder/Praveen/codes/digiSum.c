#include<stdio.h>
int main(){
	int sum=0,num,n;
	printf("Enter a number: ");
	scanf("%d",&num);
	int temp=num;
	while(temp>0){
		n=temp%10;
		temp/=10;
		sum=sum+n;
	}
	printf("Sum of digits of %d is :%d\n",num,sum);
	return 0;
}
