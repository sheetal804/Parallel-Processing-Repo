#include<stdio.h>
#include<time.h>
int fact(int x)
{
	int fact=1,i=1;
	for(i=1;i<=x;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int fact_rec(int x)
{
	if(x==0)
		return 1;
	else
		return x*fact_rec(x-1);
}
int main()
{
	int a;
	double t_time,random;
        clock_t begin,end;
	
	scanf("%d",&a);
	begin=clock();
	printf("the factorial:%d",fact(a));
	printf("the rec factorial:%d",fact_rec(a));
	

}
