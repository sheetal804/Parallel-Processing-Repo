#include<stdio.h>
int main()
{
	int a[3][3],i,,b[3][3];

		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				b[i][j]=a[i][j]||a[i][j];
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
}
