#include<stdio.h>
#include<omp.h>
void funcA(n)
{
	printf("\n CALL OF SECTION 1\n");
	
}

void funcB(n)
{
	printf("\n CALL OF SECTION 2\n");
}

int main()
{
	int id,s=1;
	#pragma omp parallel
	{
		id=omp_get_thread_num();
		int n;
		printf("enter number\n");
		scanf("%d",&n);
		#pragma omp sections
		{	
			#pragma omp section
			{			
				
				printf("\n TID OF SECTION 1  is %d\n",id);
				(void)funcA(n);
				s=s+1;
				printf("s of 1st =%d\n",s);	
			}

			#pragma omp section
			{			
					printf("s of second =%d\n",s);	
					printf("\n TID OF SECOND SECTION 2  is %d",id);
					funcB(n);		
			}
		}
	}
	

			printf("\n TID %d\n",id);
		return 0;
}

