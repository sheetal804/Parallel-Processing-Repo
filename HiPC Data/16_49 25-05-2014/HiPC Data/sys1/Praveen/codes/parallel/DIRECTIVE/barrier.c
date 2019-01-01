#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<unistd.h>
int main(){
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
	return 0;
}
