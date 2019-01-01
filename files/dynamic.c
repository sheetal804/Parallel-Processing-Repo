#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,v,j;
	
	printf("Enter the number of vertices\n");
	scanf("%d",&v);
	int **g;
		double *p;
	p=(double*)malloc(v*sizeof(double));
	g=(int**)malloc(v*v*sizeof(int));
	for(i=0;i<v;i++)
	{
		
		p[i]=(rand()%100/100.0);
		printf("%lf",p[i]);

	}
	for(i=0;i<v;i++)
	{
		
		for(j=0;j<v;j++)
		{	
			g[i][j]=0;
		}
		printf("%d",g[i][j]);
	}
	return 0;
}
