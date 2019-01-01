#include<stdio.h>
int m,n;
void matrix()
{
	printf("ENTER THE DIMENSION OF MATRix\n");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
	
	int main()
	{
		matrix();
		return 0;
	}

