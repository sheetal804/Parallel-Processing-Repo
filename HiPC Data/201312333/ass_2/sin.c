#include<stdio.h>
#include<math.h>
/*int compute_ti(int a,int n)
{
	int fact=t=1,sum=0;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		t=t*a;
		ti=fact/t;
		sum=sum+ti;
	}
	
}*/
int fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{ 
		fact=fact*i;
	}
return fact;
}
double mypow(double a,int n)
{
	double temp_x=1.0;
	int i;
	for(i=1;i<=n;i++)
	{
		temp_x=temp_x*a;
	}
return temp_x;
}
int pow_neg_one(int a,int n)
{
	int temp_x=1,i;
	
	for(i=1;i<=n;i++)
	{
		temp_x=temp_x*a;
	}
	return temp_x;
}
int main()
{
	double a,k,sum=0,x,y,z;
	int i,n,b=-1;
	scanf("%lf",&a);
	scanf("%d",&n);
	k=sin(a);
	
	for(i=0;i<=n;i++)
	{
		printf("\ncheck");
		getchar();
		x=(double)fact((2*i)+1);
		
	
		y=mypow(a,(2*i)+1);
		

		z=(double)pow_neg_one(b,i);
		

		
		sum=sum+(z*(y/x));
		printf("\nloop:%d\nsum:%lf",i,sum);
		//getchar();
	}
	printf("Using Lib func:%f",k);
	//printf("\nUsing general method:%f",sum);


}
