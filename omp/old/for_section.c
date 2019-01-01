#include<stdio.h>
#include<omp.h>
int main()
{
	int i,n=5,a=10;
	int b[n];
	#pragma omp parallel 
	{
		int id=omp_get_thread_num();
		#pragma omp single
		{
			printf("single construct executed by the thread %d\n",omp_get_thread_num());
			
		}
		#pragma omp for
		for(i=0;i<n;i++)
		{
		
			printf("TID %d,i=%d\n",id,i);
			b[i]=a;
		}
	
	}
	for(i=0;i<n;i++)
	printf("%d\n",b[i]);
return 0;
} 
