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


	for(k=0;k<2;k++)
	{
		for(i=k+1;i<3;i++)
		{
			m=a[i][k]/a[k][k];
			printf("ratio%f\n",m);
			for(j=0;j<3;j++)
			{
				printf("a[i][j]%f\n",a[i][j]);
				printf("m*a[k][j]%f\n",(m*a[k][j]));
				getchar();
				a[i][j]=a[i][j]-m*a[k][j];
				printf("%f\n",a[i][j]);
			}
			getchar();
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
