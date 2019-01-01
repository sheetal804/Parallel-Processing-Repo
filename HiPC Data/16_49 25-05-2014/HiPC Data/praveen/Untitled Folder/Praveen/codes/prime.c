#include<stdio.h>
int IsPrime(int a){
	int flag=0,i;
	for(i=1;i<a/2;i++){
		if(a%i==0)
			flag++;
	}
	if(flag==1)
		return 1;
	else
		return 0;
}
int main(){
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	if(IsPrime(num))
		printf("\n%d is a prime number\n",num);
	else
		printf("\n%d is not a prime number.\n",num);
	return 0;
}
