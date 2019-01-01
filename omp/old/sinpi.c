#include<stdio.h>
#include<math.h>
int main()
{
	double step;
	int num_step=10000;
	int i;
	step=1.0/(double)num_step;
	
	double sum,pi,x,y;
	#pragma parallel
	for(i=1;i<=num_step;i++)
	{
		x=(i-0.5)*step;
		y=(1.0-x*x);
		sum+=2/sqrt(y);
	}
	
	pi=step*sum;	
	printf("PIE %lf",pi);
return 0;
}
