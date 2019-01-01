#include<stdio.h>
int main()
{
	int a[3][3],i,j,k,m,n;
	int b[3];
	//_fpurge(stdin);

	scanf("%d",&m);
	scanf("%d",&n);
	printf("Read mat a:\n");

/*	for(i=0;i<m;i++)
	{
		for(j=0;j<m+1;j++)
		{			
			scanf(" %d ",&a[i][j]);
		}
		printf("\n");
	}
*/

	printf("Read mat b\n");

	for(i=0;i<m;i++);
		scanf(" %d ",&b[i]);
/*	
	printf("\nInput matrix A is:\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
*/
	printf("\nInput matrix b is:\n");

	for(i=0;i<m;i++)
	{
		
			printf("%d",a[i][j]);
		
	}
/*
	for(i=1;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=a[i][j]-(a[i][0]*a[0][j]/a[0][0]);
			b[i]=b[i]-(a[i][0]*b[0]/a[0][0]);
		}	
	}

	printf("\n output A:\n");

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}

	printf("\n output B:\n");

	for(i=0;i<m;i++)
	{
			printf(" %d ",b[i]);
		
	}
*/
}
