#include<stdio.h>
#include<time.h>
#define max 1000000
int main()
{
	double t_time,random;
        clock_t begin,end;
	int i,j;
	FILE *fp;
	fp=fopen("ajay2.txt","w");
	begin=clock();
	for(i=0;i<max;i++)
		for(j=0;j<max;j++)
		{	random=(double)(rand()%10);
			fprintf(fp,"%lf",random);
		}
	fprintf(fp,"\n");
	
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);
	fclose(fp);
}
