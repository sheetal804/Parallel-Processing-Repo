#include<stdio.h>
#include<stdlib.h>
int main()
{
	float **a;
	float **b;
	int n,m,i,j;
	printf("Enter the dimension");
	scanf("%d",&n);
	a=(float**)malloc(n*sizeof(float));
	b=(float**)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=rand();
		b[i][j]=rand();

		printf("%f",a[i][j]);
		printf("%f",b[i][j]);
		getchar();		
		}
	}
return 0;
}	
	


