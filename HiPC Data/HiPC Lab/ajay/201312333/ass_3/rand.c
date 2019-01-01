#include<stdio.h>
#include<stdlib.h>
#define max 5


int main()
{
	int v,G[max][max],i,j,k;
	int a[max][max],b[max][max];
	double Q,p;
	FILE *fp;
	fp=fopen("rand1.txt","w");
	printf("enter no of vertex\n");
	scanf("%d",&v);
	printf("enter the value of p\n");
	scanf("%lf\n",&p);
/*	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
		G[i][j]=NULL;
		}
	}
*/
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			Q=(double)rand()/RAND_MAX;

			if(Q<p)
	 			G[i][j]=1;
			else
				G[i][j]=0;

		}
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			fprintf(fp,"%d\t",G[i][j]);
			printf("%d",G[i][j]);
		}
		fprintf(fp,"\n");
		printf("\n");
	}
	fclose(fp);
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			a[i][j]=G[i][j];
		}
	}
	
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	for(i=1;i<v;i++)
	{
		a[i][j]=a[i][j] & G[i][j];
		b[i][j]=b[i][j] | a[i][j];
	}	
	//warshall algorithm
	
/*	for(k=0;k<v;k++)
	{
		for(i=0;j<v;j++)
		{
			for(j=0;j<v;j++)
				a[i][j]=G[i][j] | (G[i][k] & G[k][j]);
		}
		for(i=0;j<v;j++)
		{
			for(j=0;j<v;j++)
				G[i][j]=a[i][j];
		}
		
		printf("\n R%dmatrix:\n",k);
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
			   printf("%d ",a[i][j]);
			 }
			 printf("\n");
		}

	}
*/
	
		printf("\n R%dmatrix:\n",k);
		for(i=0;i<v;i++)
		{
			for(j=0;j<v;j++)
			{
			   printf("%d ",b[i][j]);
			 }
			 printf("\n");
		}

	


}
