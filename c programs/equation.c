#include<stdio.h>
void matrix()
{
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Original matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int k=0;
	for(i=1;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			for(k=i;k>=1;k--)
			{

			a[i][j]=a[i][j]-((a[k][0]*a[i-1][j])/a[i-1][i-1]);
			}
		}			

	}
	printf("new matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]); 
		}
		printf("\n");
	}
}
int main()
{
	matrix();
	return 0;
}
