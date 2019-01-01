#include<stdio.h>
int min(int x,int y)
{
	if(x>y)
	return y;
	else
	return x;
}
int main()
{
	int i,k,j,n;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	int a[n][n],g[n][n];
	FILE *fp;
	fp=fopen("random.txt","r");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(fp,"%d",&g[i][j]);
		}
	}	
	
	printf("readed graph\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",g[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(g[i][j]==1)
			a[i][j]=rand()%100;
			else
			a[i][j]=0;
		}
	}
	printf("ORIGINAL MATRIX\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	int y;
	printf("new values\n");
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{

				y=min(a[i][j],(a[i][k]+a[k][j]));
				
				a[i][j]=y;		
			}
		}	
	}


	printf("AFTER COMPAIRING EACH PAIR\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
