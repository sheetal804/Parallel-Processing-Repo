#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=2;i<m;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=a[i][j]-(a[i][1]*a[1][j]/a[1][1]);
		}
	}
	printf("\n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{	
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
