#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include<sys/time.h>
#define max 100
int main()
{
	//int a[max][max],b[max][max],c[max][max];
	int m,n,p,q,i,j,k,sum=0;
	struct timeval Timevalue_start;
	struct timezone Timezone_start;
	struct timeval Timevalue_Final;
	struct timezone Timezone_Final;
	long time_start,time_end;
	double time_overhead;
	double t_time,random;
        	clock_t begin,end;
	FILE *fp=fopen("mat_mul.txt","w");
	scanf("%d",&m);
	
	scanf("%d",&n);
	scanf("%d",&q);
	scanf("%d",&p);
	

	if(m==p)
	{
		printf("\n Matrix multiplication possible:");
		int **a = (int **)malloc(m* sizeof(int *));
    		for (i=0; i<m; i++)
         	a[i] = (int *)malloc(n * sizeof(int));	
		int **b = (int **)malloc(q* sizeof(int *));
    		for (i=0; i<q; i++)
         	b[i] = (int *)malloc(p * sizeof(int));	
		int **c = (int **)malloc(m* sizeof(int *));
    		for (i=0; i<m; i++)
         	c[i] = (int *)malloc(p * sizeof(int));		
		printf("Enter first matrix:");
		
		begin=clock();
		for(i=0;i<m;i++)
		{	
			for(j=0;j<n;j++)
			{	
				a[i][j]=rand()%10;
				//fprintf(fp,"%lf",a[i][j]);
				//scanf("%d",&a[][]
			}

			//fprintf(fp,"\n");
		}
		printf("Enter second matrix:");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{	
				b[i][j]=(rand()%10);
				//fprintf(fp,"%lf",b[i][j]);
			}

			//fprintf(fp,"\n");
		}
	/*	printf("first matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{		
				printf("%d",a[i][j]);
				//fprintf(fp,"%lf",
			}
			printf("\n");
		}*/
		printf("second matrix:\n");
	/*	for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{		
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
*/
		/*for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				c[i][j]=0;
			}
		}*/
		gettimeofday(&Timevalue_start,&Timezone_start);
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
					sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;	
			}
		}
		gettimeofday(&Timevalue_Final,&Timezone_Final);
	time_end=Timevalue_Final.tv_usec*1000000+ Timevalue_Final.tv_usec;
	time_start=Timevalue_start.tv_usec*1000000+ Timevalue_start.tv_usec;
	time_overhead=(time_end-time_start)/1000000.0;
	printf("time overhead:%lf",time_overhead);
		/*printf("\nmatrix multiplication is two matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d\t",c[i][j]);
				//fprintf(fp,"%d\t",c[i][j]);
			}
			fprintf(fp,"\n");
			printf("\n");
			
		}*/
	}
		//fclose(fp);
		//else
		//("\n matrix multiplication is not possible:");
	//end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);

}
	
