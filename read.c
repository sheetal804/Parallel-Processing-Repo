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
			fscanf(fp,"%d",&g[i][j]);
			
		}
		
	}	

	
	
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				x=and(g[i][k],g[k][j]);
				g[i][j]=or(g[i][j],x);
				
				
			}
		
		}
	}
	FILE *f1;
	f1=fopen("warshall.txt","w");
	
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		{	
			fprintf(f1,"%d\t",g[i][j]);
		}
	
	    fprintf(f1,"\n");
	}
	
	return 0;

}			