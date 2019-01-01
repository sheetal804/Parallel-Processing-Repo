#include<stdio.h>
#include<omp.h>
#include<time.h>
void print_time(int a,char *a)
{
	printf("\n thread %d %s barrier at :"
	
int main()
{
	int TID;
	#pragma omp parallel private(TID)
	{
		TID=omp_get_thread_num();
		if(TID<omp_get_num_threads()/2)
		system("sleep 3");
		(void)print_time(TID,"before");
		
		#pragma omp barrier
			(void)print_time(TID,"after");
	}		
}	
