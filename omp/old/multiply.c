#include<stdio.h>
#include<stdlib.h>
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
		a[i][j]=2;
		b[i][j]=1;		
		}
	}
	
	fp=fopen("program.txt","w");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			s=0;
			for(k=0;k<n;k++)
			{
				s=a[j][k]*b[k][j]+s;
			
			}
			c[i][j]=s;
			printf("%d\t",s);
			fprintf(fp,"%d\n",c[i][j]);
		}
	}
		end=clock();
		time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
		
	
	printf("TIME consumed =%lf",time_spent);
return 0;
}

