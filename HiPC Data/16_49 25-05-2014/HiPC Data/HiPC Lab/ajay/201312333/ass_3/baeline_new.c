#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<malloc.h>
int main()
{
	int i,j,v,c;
	double p,x;
	int a[100][100];
	printf("\n Enter the value of V:");
	scanf("%d",&v);
	printf("\n Enter the value of probability:");
	scanf("%lf",&p);
	for(i=0;i<=v-1;i++);
	{	
		for(j=0;j<=v-1;j++)
		{
			a[i][j]=0;
		}
	}
	for(i=0;i<=v-1;i++);
	{	
		for(j=0;j<=v-1;j++)
		{
			//x=(double)rand()/RAND_MAX;
			//c++;
			//if(x<p)
			a[i][j]=1;
			
			//else
			//a[i][j]=0;
		}
		
	}
	for(i=0;i<=v-1;i++);
	{	
		for(j=0;j<=v-1;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	return 0;
}
