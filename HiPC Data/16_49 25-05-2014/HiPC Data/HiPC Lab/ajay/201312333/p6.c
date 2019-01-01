#include<stdio.h>
int isperfect(int a)
{
	int c=0,b,sum=0,sum2=0,m,i;
	b=a;
	for(i=0;i<=b;i++)
	{
		if(b%i==0)
		sum=sum+i;
	}
	printf("sum=%d",sum);
	
	
		
	if(sum==b)
		
		
		return 1;
	else
	
		
       		return 0;
	
}
int main()
{
	int x,f=0;
	scanf("%d",&x);
	f=isperfect(x);
        if (f==1)
	printf("perfect number");
	else
	printf("not a perfect number");
	
	return 0;
}
	
