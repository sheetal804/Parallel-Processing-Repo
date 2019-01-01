#include<stdio.h>
#include<stdlib.h>
void read_matrix(float **mat,int m, int n){
	int i,j;
	for(i=0;i<m;++i){
		mat[i]=(float *)malloc(sizeof(float)*(n));
		for(j=0;j<n;++j){
			scanf("%f",mat[i]+j);
		}
	}
}
void display_matrix(float **mat,const int m,const int n){
	int i,j;
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			printf("%.2f\t",*(mat[i]+j));
		}
		printf("\n");
	}
}
void matrix(float **mat,int m,int n){
	int i,j,k=0,temp;
	for(i=1;i<m;i++){
		for(k=0;k<i;k++){
			temp=mat[i][k];
			for(j=k;j<n;j++){			
				mat[i][j]=mat[i][j]-(temp*mat[k][j])/mat[k][k];
			}
		}
	}
	printf("\n");
}
/*void read_constant(float *c,int m){
	int i;
	c=(float *)malloc(sizeof(int)*m);
	for(i=0;i<m;i++){
		scanf("%f",c+i);
	}
}
void make_matrix(float **mat,float *c,int m, int n){
	int i;
	for(i=0;i<m;i++){
		//mat[i][n]=c[i];
		printf("%f ",c+i);
	}
}	*/	
int main(){

	int m,n;
	printf("Enter the dimension of the matrix (m*n):");
	scanf("%d%d",&m,&n);
	float *mat[m];
	float *c;
	float **ptr=mat;
	printf("Enter the values into the matrix(%d*%d):\n",m,n);
	read_matrix(ptr,m,n);
	//printf("Enter the constant terms:");
	//read_constant(c,m);
	printf("\nThe Given matrix is :\n");
	//make_matrix(ptr,c,m,n);
	display_matrix(ptr,m,n);
	matrix(ptr,m,n);
	printf("\n\nThe caluculated matrix is :\n");
	display_matrix(ptr,m,n);
	free(*mat);
	printf("\nMemory unallocated.\n");
	return 0;
}	
