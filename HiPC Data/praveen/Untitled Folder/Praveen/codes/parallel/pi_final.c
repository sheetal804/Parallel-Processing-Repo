#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i;
	double num_steps;
	clock_t begin,end;
	double exetime;
	double steps;
	for(num_steps=10;num_steps<=1000000000;num_steps=num_steps*10){
		double pi,sum=0.0,y;
		steps=1.0/(double)num_steps;
		omp_set_num_threads(4);
		begin=clock();
		#pragma omp parallel private(i,sum) shared(y)
		{
			double x;
			int id;
			id =omp_get_thread_num();
			#pragma omp for schedule(static,2)
			for(i=1;i<=num_steps;i++){
				x=(i-0.5)*steps;
				sum+=4.0/(1.0+x*x);
			}
			y=sum;
		}
		pi=y*steps;
		end=clock();
		exetime=(double)(end-begin)/CLOCKS_PER_SEC;
		printf("num steps= %.0lf\nexecution time= %lf\nvalue of pi =%.20lf\n\n",num_steps,exetime,pi);
	}
		return 0;
}
