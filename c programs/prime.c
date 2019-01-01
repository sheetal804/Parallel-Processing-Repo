#include<stdio.h>
void prime(int n)
{
	int i,f=0;
	for(i=0;i<n/2;i++)
	{
		if(n%i==0)
		{		
		f=1;
		break;
		}
	}
	if(f==1)
	printf("NOT A PRIME NUMBER");
	else
	printf("A PRIME NUMBER");
}
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	prime(n);
	return 0;
}
