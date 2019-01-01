#include<stdio.h>

void matrix()
{
	float a[3][3],m;
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	printf("Original matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	
	}
	
	for(i=1;i<3;i++)
	{
		m=a[i][0]/a[0][0];
		printf("ratio%f\n",m);
	for(j=0;j<3;j++)
	{
		a[i][j]=a[i][j]-m*a[0][j];
	}
	}


	printf("new matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%f\t",a[i][j]); 
		}
		printf("\n");
	}
}
int main()
{
	matrix();
	return 0;
}
