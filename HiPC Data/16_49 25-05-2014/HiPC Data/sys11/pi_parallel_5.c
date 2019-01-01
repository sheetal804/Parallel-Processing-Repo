#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#define num_steps 1000000
int main(){
	int i;
	double x,pi,sum;
	double step=1.0/(double)num_steps;
	#pragma omp parallel for private(i) reduction(+:sum)
	for(i=1;i<=num_steps;i++)
			{
				x=(i-0.5)*step;
				sum+=4.0/(1.0+x*x);
			}
	pi=sum*step;
	printf("value of pi :%.20lf\n",pi);
	return 0;
}
	
	
