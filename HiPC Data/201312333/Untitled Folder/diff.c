#include<stdio.h>
#include<omp.h>
int main()
{
	
	int a,i,b[20],c[20],n;
	printf("\n enter the value of n:");
	scanf("%d",&n);
	scanf("%d",&a);
    #pragma omp parallel shared(a,b) private(i)
    {
	#pragma omp single
	{
		a=10;
		printf("Single construct executed by thread %d\n",omp_get_thread_num());
	}
	#pragma omp for
		for(i=0;i<n;i++)
  		{
  			c[i]=omp_get_thread_num();
  			b[i]=a;
  		}	
    }
    printf("after the parallel region:\n");
    for(i=0;i<n;i++)
    printf("b[%d]=%d\t c[%d]=%d\n",i,b[i],i,c[i]);
   }
