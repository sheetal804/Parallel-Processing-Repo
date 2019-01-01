#include<stdio.h>
int main()
{
	int a,c;
	scanf("%d",&a);
	while(a>0)
	{
		c=a%10;
		printf("%d",c);
		a=a/10;
	}
}
