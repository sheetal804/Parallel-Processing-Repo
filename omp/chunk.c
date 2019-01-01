#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>
#define chunk 4 
int main()
{
	double ts,te,to;
	int k,i,j,n,x,s;
	FILE *fp;
	struct timeval TimeValue_Start;
	struct timezone Timezone_Start;
	struct timeval TimeValue_Final;
	struct timezone Timezone_Final;
	printf("enter no of threads\n");
	scanf("%d",&x);
	printf("Enter the dimension\n");
	scanf("%d",&n);
	int a[n][n],b[n][n],c[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		a[i][j]=2;
		b[i][j]=1;		
		}
	}

		fp=fopen("program.txt","w");
   	 	gettimeofday(&TimeValue_Start,&Timezone_Start);
		omp_set_num_threads(x);
	   	#pragma omp parallel for schedule(static,chunk)
		
	   	 for(i=0;i<n;i++)
	    	{
			for(j=0;j<n;j++)
			{
				s=0;
				for(k=0;k<n;k++)
				{
				c[i][j]+=a[j][k]*b[k][j];
			
				}
				
			
			}
		}
			//fprintf(fp,"%d\t",c[i][j]);
			//fprintf(fp,"\n");
	    	
	gettimeofday(&TimeValue_Final,&Timezone_Final);
	te=TimeValue_Final.tv_sec*1000000+TimeValue_Final.tv_usec;
	ts=TimeValue_Start.tv_sec*1000000+TimeValue_Start.tv_usec;
	to=(te-ts)/1000000;
	printf("parallel time=%lf\n",to);
	return 0;
}

