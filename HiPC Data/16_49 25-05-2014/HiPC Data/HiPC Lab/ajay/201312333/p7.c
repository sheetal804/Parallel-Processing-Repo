#include<stdio.h>
int isprime(int a)
{
	if(a%2==0)
	printf("%d is a prime",a);
	else
	printf("%d is not a prime",a);
}
int main()
{
	int z;
	scanf("%d",&z);
	isprime(z);
}
