#include<stdio.h>
int main()
{
	int a[50][50],b[50][50],c[50][50];
	int m,n,p,q,i,j,k,sum=0;
	scanf("%d",&m);
	
	scanf("%d",&n);
	scanf("%d",&q);
	scanf("%d",&p);

	if(m==p)
	{
		printf("\n Matrix multiplication possible:");
	
	
		printf("Enter first matrix:");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		printf("Enter second matrix:");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		printf("first matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{		
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
		printf("second matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{		
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				c[i][j]=0;
			}
		}

		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
					sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;	
			}
		}
		printf("\nmatrix multiplication is two matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
			
		}
	}

		else
		printf("\n matrix multiplication is not possible:");

}
	