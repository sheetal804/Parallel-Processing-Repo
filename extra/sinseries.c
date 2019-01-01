#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}
double sinseries(int n,double x)
	{
		double d=0.0;
		int i;
		for(i=1;i<=n;i++)
		{
			d=d+(pow(x,k)/fact(k));
			k+=2;
		}
	return d;
	}
int main()
{
	int n;
	double x;
	printf("Enter the extent of sin series\n");
	scanf("%d",&n);
	printf("Enter angle\n");
	scanf("%d",&x);
	printf("%lf",sinseries);
	return 0;
}
						
