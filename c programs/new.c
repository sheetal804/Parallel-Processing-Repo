#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	printf("Enter the dimension of matrix");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("a.txt",'w');
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	
	scanf("%d",&a[i][j]);
	fscanf(stdin,"%d",&b[i][j]);	
	
	fprintf(stdout,"%d",a[i][j]);
	fprintf(stdout,"%d",b[i][j]);
	}
	}
return 0;
}

