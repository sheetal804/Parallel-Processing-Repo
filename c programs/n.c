#include<stdio.h>
void matrix()
{
	double a[3][3],b[3][3];
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%lf",&a[i][j]);
		}
	}

	printf("Original matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%lf\t",a[i][j]);
		}
		printf("\n");
	
	}
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			b[i][j]=a[i][j];
		}
	}

	for(i=1;i<3;i++)
	{
		for(j=0;j>=i-1;j++)
		{
		
			b[i][j]=a[i][j]-((a[i][j]*a[i-1][j])/a[i-1][j]);
		}
	}
	printf("new matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%lf\t",b[i][j]); 
		}
		printf("\n");
	}
}
int main()
{
	matrix();
	return 0;
}