#include<stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int min(int a,int b){
	return a<b?a:b;
}
int main(){
	int num1,num2,maximum, minimum;
	printf("Enter two numbers :");
	scanf("%d",&num1);
	scanf("%d",&num2);
	maximum=max(num1++,num2++);
	minimum=min(num1,num2);
	printf("Maximum is :%d\n",maximum);
	printf("Minimum is :%d\n",minimum);
	return 0;
}
