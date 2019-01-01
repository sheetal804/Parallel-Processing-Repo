#include<stdio.h>
#include<omp.h>
int main()
{
	int i,th_id,num_thd;
	double x,sum=0.0,num_step,step,pi;
	scanf("%lf",&num_step);
	#pragma omp parallel 
	{
		th_id = omp_get_thread_num();
		num_thd=omp_get_num_threads();
		printf("\n NUm of threads:%d",num_thd);
		step=1.0/(double)num_step;   //h
		#pragma omp parallel shared(sum,x) private(i)
		for(i=0,th_id=0;i<num_thd;i++,th_id++)
		{
			
			if(th_id==0)
			{
				for(i=1;i<=num_step/num_thd;i++)
				{
			
					x=(i-.5)*step;
					sum=sum+(4/(1.0+x*x));
					print("\n sum %d:%d\tID:%d",i,sum,th_id);
				}
			}
		
		pi=step*sum;
		printf("pi:%lf",pi);
	
	}	
}			
