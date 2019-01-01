#include<stdio.h>
int main()
{
	FILE *fp=fopen("test.txt","w");
	int a[3][3],i,j,k,n;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
			
			}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			fprintf(fp,"%d",a[i][j]);
		}
			fprintf(fp,"\n");	
	}
	fclose(fp);
	fp=fopen("test.txt","r");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			fscanf(fp,"%d",&a[i][j]);
			printf("%d",a[i][j]);	
		}	
			printf("\n");
			
	}
	fclose(fp);
}	
	
					
