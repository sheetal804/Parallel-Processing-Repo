#include<stdio.h>
#include<omp.h>
#include<sys/time.h>
#include<stdlib.h>
int main()
{
	double ts,te,to;
	struct timeval TimeValue_Start;
	struct timezone Timezone_Start;
	struct timeval TimeValue_Final;
	struct timezone Timezone_Final;
	int i,j,n;
	printf("ENTER DIMENSION OF ARRAY\n");
	scanf("%d",&n);
	float a[n][n],b[n][n];
	printf("ORIGINAL\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=(float)rand()/RAND_MAX;
			
			
		}
		
	}
	gettimeofday(&TimeValue_Start,&Timezone_Start);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}	
	}
	gettimeofday(&TimeValue_Final,&Timezone_Final);
	te=TimeValue_Final.tv_sec*1000000+TimeValue_Final.tv_usec;
	ts=TimeValue_Start.tv_sec*1000000+TimeValue_Start.tv_usec;
	to=(te-ts)/1000000.0;
	//printf("TRANSPOSE\n");
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%lf\t",b[i][j]);
		}
		printf("\n");
	}*/
	printf("serial time=%lf\n",to);
return 0;
}
