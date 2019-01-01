#include<stdio.h>
#include<omp.h>
#include<malloc.h>
#include<time.h>
int main()
{
	int n,i,summ=0,my_sum=0;
	double t_time,random;
        clock_t begin,end;

	printf("\n Enter the dimension:");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
		a[i]=rand()%2;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
		begin=clock();
	#pragma omp parallel private(my_sum,i) shared(summ) 
	{
		
		#pragma omp for schedule(static)
		for(i=0;i<n;i++)
		{
			my_sum=0;
			my_sum=my_sum+a[i];
			
			#pragma omp critical
			summ=summ+my_sum;
			printf("\n Summ:%d\t my_sum%d\t i:%d id:%d",summ,my_sum,i,omp_get_thread_num());

		}

	}
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);
	printf("\n Summ:%d\t my_sum%d",summ,my_sum);
	return 0;
}

