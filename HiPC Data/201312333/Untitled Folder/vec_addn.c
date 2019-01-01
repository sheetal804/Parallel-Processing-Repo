#include<stdio.h>
#include<malloc.h>
#include<time.h>
int main()
{
	int i,n;
	double t_time,random;
        	clock_t begin,end;
	printf("\n Enter the dimension of vector:");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(n*sizeof(int));
	int *c=(int*)malloc(n*sizeof(int));
	begin=clock();
	printf("\n read vector A:\n");
	for(i=0;i<n;i++)
		a[i]=rand()%2;
	printf("\n read vector B:");	
	for(i=0;i<n;i++)
		b[i]=rand()%2;
/*	printf("\n vector A:\n");	
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}		
	printf("\nvector B:\n");	
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]=%d",i,b[i]);
	}		
*/					
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
		printf("\nc[%d]=%d",i,c[i])
		}
	printf("\n after vector addition:\n");	
/*	for(i=0;i<n;i++)
	{
		printf("\nc[%d]=%d",i,c[i]);
	}	
	*/
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);			
}	
