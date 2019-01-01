#include<stdio.h>

void matrix()
{
	int n,p;
	printf("enter dimension\n");
	scanf("%d",&n);

	double a[n][n];
	double x;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}
	printf("Original matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%lf\t",a[i][j]);
		}
		printf("\n");
	
	}
		
		for(k=0;k<n-1;k++)
		{
			
		   for(j=k+1;j<n;j++)
		    {
			x=a[j][k]/a[k][k];
			printf("ratio for j= %d\t is %lf\n",j,x);
			
			for(p=k+1;p<n;p++)
			{
			
				getchar();
				printf("%d\n",p);
				
				a[p][j]=a[p][j-1]-x*a[k][j-1];
				printf("zeroth value\t%f\n",a[k][p]);
				getchar();

			}
			printf("\n");
				
		}
	}



		
	printf("new matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%lf\t",a[i][j]); 
		}
		printf("\n");
	}
}
int main()
{
	matrix();
	return 0;
}
