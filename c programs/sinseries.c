#include<stdio.h>
#include<math.h>
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return (n*fact(n-1));
}
double sinseries(double x)
	{
		int n=8;
		double d=0.0,a,b;
		int i,k=1;
		for(i=1;i<=n;i++)
		{
			//a=pow(x,k);
			//b=fact(k);
			//printf("pow :%lf\n",a);
			
			
			//printf("fact :%lf\n",b);
			//getchar();
			if(i%2==0)
			d=d-(pow(x,k)/fact(k));
			else
			d=d+(pow(x,k)/fact(k));
			k+=2;
			//printf("sum :%lf",d);
		}
	return d;
	}
int main()
{
	double x;
	printf("Enter angle in radian\n");
	scanf("%lf",&x);
	printf("series result= %lf\n",sinseries(x));
	printf("library result= %lf\n",sin(x));
	return 0;
}
						
