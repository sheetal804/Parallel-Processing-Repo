#include<stdio.h>
void matrix()
{
	float a[3][3];
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
	printf("values\n");
	float x;
	int p=2;
	for(i=1;i<3;i++)
	{
		if(i==2)
		p=0;
		for(j=0;j<i;j++)
		{
			printf("i is%d\n",i);
			printf("j is%d\n",j);
			printf("p id %d\n",p);
			printf("a[p][j]=%lf\n",a[i][j]);
			printf("a[i+p][j]=%lf\n",a[p][j]);
			x=a[i][j]/a[p][j];
			printf("ratio%f\n",x);
			
			for(k=0;k<3;k++)
			{
			
				getchar();
				printf("%d\n",k);
				printf("a[p][k]=%lf\n",a[p][k]);
				a[i][k]=a[i][k]-x*a[p][k];
				printf("zeroth value\t%f\n",a[i][k]);
				getchar();

			}
			printf("\n");
			p++;

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
