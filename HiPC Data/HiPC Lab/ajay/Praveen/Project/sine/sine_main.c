#include<stdio.h>
int main(){
	double sum=0;
	int num;
	printf("Enter the value of x : ");
	scanf("%d",&num);
	int i=2;
	mysine(&sum,num);
	printf("Value of sin(%d) is : %f.\n",num,sum);
	return 0;
}
