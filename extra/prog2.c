#include<stdio.h>
int main()
{
	float *p;
	int n;
	printf("Enter the dimension");
	scanf("%d",&n);
	p=(float*)malloc(n*sizeof(float));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=rand();
		b[i][j]=rand();
		printf("%d",a[i][j]);
		printf("%d",b[i][j]);
		}
	}
return 0;
}	
	


