#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double step(int a , int b, int n){
	return (float)(b-a)/(n+1);
}
void value(int *x, int *y){
	printf("x = ");
	scanf("%d",x);
	printf("y = ");
	scanf("%d",y);
}
int main(){
	int n, A=1, B=-2, C=2,D=1,x0=0,x1=1,y0=0,y1=1,i,k;
	double h,m,j,z,c1,c2;
	double *a,*b,*c,*d;
	FILE *fp=fopen("log.txt","w");
/*      printf("enter the values of variables in (ay'' + by' + cy = d): ");
	scanf("%d %d %d %d",&A,&B,&C,&D);
	printf("Enter the initial conditions :\n");
	value(&x0,&y0);
	printf("Enter the boundary conditions :\n");
	value(&x1,&y1);
*/	printf("Enter the number of grid :");
	scanf("%d",&n);
	a=(double *)malloc(sizeof(double)*n);
	b=(double *)malloc(sizeof(double)*n);
	c=(double *)malloc(sizeof(double)*n);
	d=(double *)malloc(sizeof(double)*n);
	h=step(x0,x1,n);
	for(i=0;i<n;i++){
		a[i]=A/pow(h,2);
		b[i]=(2*h*h*C-2*A-B*h)/pow(h,2);
		c[i]=(A+B*h)/pow(h,2);
		d[i]=D;
	}
	d[0]=d[0]-a[0]*y0;
	d[n-1]=d[n-1]-c[n-1]*y1;
	for(k=1;k<n;++k){
		m= (a[k]/b[k-1]);
		b[k]=b[k]-(m*c[k-1]);
		d[k]=d[k]-(m*d[k-1]);

	}
	double *y=(double *)malloc(sizeof(double)*n);
	y[n-1]=d[n-1]/b[n-1];
	fprintf(fp,"Equation is : %dy\" + %dy'+%dy =%d\n",A,B,C,D);
	fprintf(fp,"\nInitial value :\nx =%d\ty = %d\n\n",x0,y0);
	fprintf(fp,"\nBoundary values:\nx =%d\ty = %d\n\n",x1,y1);
	fprintf(fp,"\nSolution are :\n");
	for(k=n-2;k>=0;k--){
		y[k]=(d[k]-c[k]*y[k+1])/b[k];
	}
	fclose(fp);
	fp=fopen("log2.txt","w");
	for(i=0,j=x0;i<n,j<=x1;i++,j=j+h){
		fprintf(fp,"%.2lf\t%.2lf\n",j,y[i]);
	}
	fclose(fp);
	fp=fopen("log3.txt","w");
	c1=(-1-(exp(-1)/2.0))/(pow(exp(-1),2)-exp(-1));
	c2=-c1-0.5;
	for(j=x0;j<=x1;j=j+h){
		z=c1*exp(-j)+c2*exp(-2.0*j)+0.5;
		fprintf(fp,"%.2lf\t%.2lf\n",j,z);
	}
	fclose(fp);
	free(a);
	free(b);
	free(c);
	free(d);
	free(y);

	return 0;
}
	
		
