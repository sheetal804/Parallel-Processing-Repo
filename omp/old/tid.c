#include<stdio.h>
#include<omp.h>
int main()
{

	int i,n=10;			

					
		
	#pragma omp sections
	{
		int id=omp_get_thread_num;
		for(i=0;i<n;i++)
		{
		
	printf("TID %d,i=%d\n",id,i);
		}
	
	}
	return 0;
	} 
