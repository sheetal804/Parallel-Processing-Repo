#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//#include<malloc.h>

int main()
{
	int G=0,i,j,v,c;
//	FILE * fp=fopen("graph.txt","w");
	double p,x;
	int a[100][100];
	printf("\n Enter the value of V:");
	scanf("%d",&v);
	
	
	
	printf("\n Enter the value of probability:");
	scanf("%lf",&p);
	for(i=0;i<v;i++);
	{	
		for(j=0;j<v;j++)
		{
			x=rand()%2;
			
			if(x<p)
				a[i][j]=1;
			else
				a[i][j]=0;
		}
		
	}
	for(i=0;i<v;i++);
	{	
		for(j=0;j<v;j++)
		{
			printf("%d ",a[i][j]);

		//	fprintf(fp,"%d\t",a[i][j]);
		}
		printf("\n");	
	//	fprintf(fp,"\n");
	}
//	printf("%d",c);
//	fclose(fp);
	return 0;
}
