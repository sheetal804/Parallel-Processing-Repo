#include<stdio.h>
int fibo(int n)
{
	int a=0,b=1,i,s;
	for(i=2;i<=n;i++)
	{
		if(n==1)
		return 0;
		else if(n==2)
		return 1;
		else
		{
			s=a+b;
			a=b;
			b=s;
		}
	}
	return s;
}
int main()
{
	int a,b,n;
	printf("Enter any number\n");
	scanf("%d",&n);
	printf("FIBONACII of the number is %d\n",fibo(n));
	return 0;
}
