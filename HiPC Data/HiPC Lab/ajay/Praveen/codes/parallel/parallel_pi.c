#include<stdio.h>
#include<omp.h>
#include<time.h>
#define num_threads 2 
int main(){
	int i;
	double pi,sum[num_threads];
	long num_steps=10000;
	double steps;
	steps=1.0/(double)num_steps;
	#pragma omp parallel
	{
		double x;
		int id;
		id =omp_get_thread_num();
		for(i=id,sum[id]=0.0;i<num_steps;i=i+num_threads){
			x=(i-0.5)*steps;
			sum[id]+=4.0/(1.0+x*x);
		}
		printf("Praveen\n");
	}
	for(i=0,pi=0.0;i<num_threads;i++){
		pi+=sum[i]*steps;
	}
	printf("num steps= %ld\nvalue of pi =%.20lf\n\n",num_steps,pi);
	return 0;
}
