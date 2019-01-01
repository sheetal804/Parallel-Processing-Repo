#include<stdio.h>
#include<omp.h>
#define num_threads 2 
int main(){
	int i;
	double num_steps=10000;
	double steps;
	double pi,sum[num_threads];
	steps=1.0/(double)num_steps;
	omp_set_num_threads(num_threads);
	#pragma omp parallel
	{
		double x;
		int id;
		id =omp_get_thread_num();
		sum[id]=0.0;
		for(i=id;i<num_steps;i=i+num_threads){
			x=(i-0.5)*steps;
			sum[id]+=4.0/(1.0+x*x);
		}
	}
	for(i=0,pi=0.0;i<num_threads;i++){
		pi+=sum[i]*steps;
	}
	printf("num steps= %.0lf\nvalue of pi =%.20lf\n\n",num_steps,pi);
	return 0;
}
