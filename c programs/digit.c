#include<stdio.h>
int digit_sum(int n)
	{
		if(n==0)
		return 0;
		else
		return ((n%10)+digit_sum(n/10));
	}
	int main()
	{
		printf("\n%d\n",digit_sum(2087));
		return 0;
	}