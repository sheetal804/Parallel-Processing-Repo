#include<stdio.h>
int main()
{
	int i,v,j;
	double r;
	
	printf("Enter the number of vertices\n");
	scanf("%d",&v);
	double p[v];
	
	FILE *fp;
	for(i=0;i<v;i++)
	{
		
		p[i]=(rand()%100/100.0);
	}
	int g[v][v];
	for(i=0;i<v;i++)
	{
		
		for(j=0;j<v;j++)
		{	
			g[i][j]=0;
		}
	}
		
	for(i=0;i<v;i++)
	{
		
		for(j=0;j<v;j++)
		{
			//getchar();
			r=(rand()%100/100.0);
			//printf("rand value%lf\n",r);
			if(r<p[i])
			g[i][j]=1;
			
		}
		
	}
	fp=fopen("random.txt","w");
	for(i=0;i<v;i++)
	{
		
		for(j=0;j<v;j++)
		{	
			fprintf(fp,"%d\t",g[i][j]);
		}
	
	    fprintf(fp,"\n");
	}
	return 0;
}
