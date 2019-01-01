#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	
	printf("Input matrix:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

	//for(i=1;i<m;i++)
	//{
		for(j=0;j<n;j++)
		
			//a[2][j]=a[2][j]-(a[2][1]*a[1][j]/a[1][1];

			//a[i][j]=a[i][j]-(a[i][0]*a[0][j]/a[0][0]);

			//a[1][j]=a[1][j]-(a[1][0]*a[0][j]/a[0][0]);      // for 2nd row
			a[2][j]=a[2][j]-(a[2][0]*a[0][j]/a[0][0]);      // for 3rd row
		
	//}
	printf("output \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
