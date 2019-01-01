#include<stdio.h>

int main()
{
	int i,j,k,c;
	int a[10][10];
	FILE *fp=fopen("rand1.txt","r");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				fscanf(fp,"%d",&a[i][k]);
				fscanf(fp,"%d",&a[k][j]);
				fscanf(fp,"%d",&a[i][j]);
				c=a[i][k]+a[k][j];
				if(c<a[i][j])
				a[i][j]=c;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}	
	fclose(fp);	
}
