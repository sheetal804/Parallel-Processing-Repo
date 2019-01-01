#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max 1447
int main(){
	float matrix[max][max];
	int i,j;
	clock_t begin,end;
	float random;
	double t_time;
	FILE *fp=fopen("file.txt","w");
	begin=clock();
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			random=(float)(rand()/(float)RAND_MAX);
			matrix[i][j]=random;
			fprintf(fp,"%f  ",matrix[i][j]);
		}
		fprintf(fp,"\n");
	}
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time taken : %lf sec\n",t_time);
	fclose(fp);
	return 0;
}
