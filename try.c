#include<stdio.h>
int and(int x,int y)
	{
		if(x==1&&y==1)
		return 1;
		else
		return 0;
	}
	int or(int x,int y)
	{
		if(x==1||y==1)
		return 1;
		else
		return 0;
	}
	
int main()
{	
	
	int a,b,c,i,j,k,x,v,n;
	printf("enter the number of vertices\n");
	scanf("%d",&n);
	int g[n][n];
	FILE *fp;
	fp=fopen("random.txt","r");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&g[i][j]);
		}
		printf("\n");
	}	

	

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",g[i][j]);
		}
		printf("\n");
	}
	
	for(k=0;k<n;k++)
	{
		//getchar();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				x=and(g[i][k],g[k][j]);
				
				g[i][j]=or(g[i][j],x);
				
				
			}
				
		
		}
		//display(g);
		//getchar();
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",g[i][j]);
		}
		printf("\n");
	}
	
	return 0;

}			
