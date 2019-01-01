#include<stdio.h>
#include<time.h>
int main(){
	int i,k;
	clock_t begin,end;
	double exetime;
	double step, sum=0.0, num_steps,pi,x;
	scanf("%lf",&num_steps);
	
		
		begin=clock();
		step=1.0/(double)num_steps;
		 
		for(i=1;i<=num_steps;i++){
			x=(i-0.5)*step;
			sum=sum+(4/(1.0 + x*x));
		}
		pi=sum*step;
		end=clock();
		exetime=(double)(end-begin)/CLOCKS_PER_SEC;
		printf("num steps= %.0lf\nexecution time= %lf\nvalue of pi =%.20lf\n\n",num_steps,exetime,pi);
	
	return 0;
}
