#include<stdio.h>
int main()
{
	float a[3][3],b[3][3],temp;
	int i,j,k=0,m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	printf("\n Read matrix:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			{
				printf("\na[%d][%d]=",i,j);
				scanf("%f",&a[i][j]);
				
			}
	
	printf("Input matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) 
		{	
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}
	for(i=1;i<m;i++)
	{
		
		for(j=0;j<n;j++)
		{
			        temp=a[0][0]/a[j][j];
				for(k=0;k<i;k++)
				{
					a[i][j]=a[i][j]-(a[i][k]*temp);
				}	
				
				
		}
	}
	printf("\n output \n");
	for(i=0;i<m;i++)                              
	{
		for(j=0;j<n;j++)
		{	
			printf("%f ",a[i][j]);
		}
		printf("\n");
	}

}
