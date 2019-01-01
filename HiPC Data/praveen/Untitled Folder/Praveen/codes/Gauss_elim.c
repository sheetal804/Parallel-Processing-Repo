#include<stdio.h>
#include<stdlib.h>
void read_matrix(float **mat,int m, int n){
	int i,j;
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			scanf("%f",&mat[i][j]);
		}
	}
}
void display_matrix(float **mat,const int m,const int n){
	int i,j;
	for(i=0;i<m;++i){
		for(j=0;j<=n;++j){
			printf("%.2f\t",mat[i][j]);
		}
		printf("\n");
	}
}
void matrix(float **mat,int m,int n){
	int i,j,k=0,temp;
	for(i=1;i<m;i++){
		for(k=0;k<i;k++){
			temp=mat[i][k];
			for(j=k;j<=n;j++){			
				mat[i][j]=mat[i][j]-(temp*mat[k][j])/mat[k][k];
			}
		}
	}
	printf("\n");
}
void read_constant(float *c,int m){
	int i;
	for(i=0;i<m;i++){
		scanf("%f",&c[i]);
	}
}
void make_matrix(float **mat,float *c,int m, int n){
	int i;
	for(i=0;i<m;i++){
		mat[i][n]=*(c+i);
	}
}	
void display_constant(float *c,int m){
	int i;
	for(i=0;i<m;i++){
		printf("%.2f\n",*(c+i));
	}
}	
void result(float **mat, float *x , int m, int n){
	x[m-1]=mat[m-1][n]/mat[m-1][n-1];
	int i,j;
	float sum;
	for(i=m-2;i>=0;i--){
		sum=0;
		for(j=i+1;j<m;j++){
			sum=sum+(mat[i][j]*x[j]);
		}
		x[i]=(mat[i][n]-sum)/mat[i][i];
	}
}
void display(float *x, int m){
	int i=0;
	for(i=0;i<m;i++){
		printf("x[%d] = %.2f\n",i,*(x+i));
	}
}
int main(){

	int m,n,i;
	printf("Enter the dimension of the matrix (m*n):");
	scanf(" %d %d", &m, &n);
	float **ptr=malloc(sizeof(float *)*m);
	for(i=0;i<n;i++){
		ptr[i]=(float *)malloc(sizeof(float)*n+1);
	}
	float *c=(float *)malloc(sizeof(float)*m);
	float *x=(float *)malloc(sizeof(float)*m);
	printf("Enter the values into the matrix(%d*%d):\n",m,n);
	read_matrix(ptr,m,n);
	printf("Enter the constant terms: \n");
	read_constant(c,m);
	display_constant(c,m);
	printf("\nThe Given matrix is :\n");
	make_matrix(ptr,c,m,n);
	display_matrix(ptr,m,n);
	matrix(ptr,m,n);
	result(ptr,x,m,n);
	printf("\n\nThe calculated matrix is :\n");
	display_matrix(ptr,m,n);
	printf("\n\nThe solution is :\n");
	display(x,m);
	free(ptr);
	free(x);
	free(c);
	printf("\nMemory unallocated.\n");
	return 0;
}	
