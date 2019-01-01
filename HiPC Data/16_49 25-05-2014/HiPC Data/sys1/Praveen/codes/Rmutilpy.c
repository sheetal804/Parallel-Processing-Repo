#include<stdio.h>
int rec_multiply(int n){
	int temp;
	if(n==2)
		return 1;
	else{
		scanf("%d",&temp);
		return( temp*rec_multiply(n+1));
	}
}
int main(){
	int n=0;
	int multiply;
	printf("enter two numbers :");
	multiply=rec_multiply(n);
	printf("The multiplication is :%d\n",multiply);
	return 0;
}
