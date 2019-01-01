#include<stdio.h>
int factorial(int num){
	int i=2,fact=1;
	for(i;i<=num;i++)
		fact=fact*i;
	return fact;
}
int rec_factorial(int num){
	if(num==1)
		return 1;
	else
		return num*rec_factorial(num-1);
}
int main(){
	int n,fact,factrec;
	printf("Enter a number: ");
	scanf("%d",&n);
	fact=factorial(n);
	printf("The factorial of %d is :\nUsing non recursive function : %d\n",n,fact);
	factrec=rec_factorial(n);
	printf("Using recursive function :%d\n",factrec);
	return 0;
}
