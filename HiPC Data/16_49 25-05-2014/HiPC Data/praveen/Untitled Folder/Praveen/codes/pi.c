#include<stdio.h>
int main(){
	int i,k;
	double step, sum=0.0, num_steps,pi,x;
	for(num_steps=10;num_steps<=1000000000;num_steps=num_steps*10){
		sum=0.0;
		step=1.0/(double)num_steps;
		for(i=1;i<=num_steps;i++){
			x=(i-0.5)*step;
			sum=sum+(4/(1.0 + x*x));
		}
		pi=sum*step;
		printf("num steps= %.0lf\nvalue of pi =%.20lf\n\n",num_steps,pi);
	}
	return 0;
}
