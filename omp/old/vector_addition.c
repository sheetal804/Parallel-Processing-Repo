#include<stdio.h>
#include<omp.h>
#include<time.h>
int main()
{
	int k,i,j,n,s;
	FILE *fp;
	
	clock_t begin,end;
	double time_spent;
	printf("Enter the dimension\n");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	begin=clock();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=1;
		b[i][j]=1;		
		}
	}
	begin=clock();
	fp=fopen("multiply.txt","w");
	#pragma omp parallel
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
			fprintf(fp,"%d\t",(a[j][k]+b[k][j]));
			}
			fprintf(fp,"\n");
		}
	}
	}
	end=clock();
	time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time spent %lf\n",time_spent);
	return 0;
}
