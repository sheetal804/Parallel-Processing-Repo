#include<stdio.h>
#include<stdlib.h>
int main()
{
	float *p;
	int n,m,i,j;
	printf("Enter the dimension");
	scanf("%d",&n);
	m=n*n;
	a=(float*)malloc(m*sizeof(float));
	b=(float*)malloc(m*sizeof(float));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=rand();
		b[i][j]=rand();

		printf("%d",a[i][j]);
		printf("%d",b[i][j]);
		getchar();		
		}
	}
return 0;
}	
	


