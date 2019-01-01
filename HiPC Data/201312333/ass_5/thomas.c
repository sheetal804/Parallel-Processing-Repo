#include<stdio.h>
#include<math.h>
#include<malloc.h>
int triadiagonal(int a[],int b[],int c[],int d[],int n)
{

}
int main()
{
	FILE *fp=fopen("log.txt","w");
	float a[30],b[30],c[30],d[30],x[30],y[30];
	float u,v,temp,h,p,q,r,s,t,m;
	int j,i=0,k=0,n;
	
	printf("\n AJAY1");
	printf("\n Enter the value of f(1):");
	scanf("%f",&u);
	printf("\n Enter the value of f(0):");
	scanf("%f",&v);
	printf("\n Enter number of grid:");
	scanf("%d",&n);

	x[0]=v;
/*	printf("\n Enter the coeff y``:%d");
	scanf("%d",&p);
	printf("\n Enter the coeff y`:%d");
	scanf("%d",&q);
	printf("\n Enter the coeff y:%d");
	scanf("%d",&q);
	printf("\n Enter the constant term:%d");
	scanf("%d",&t);
*/
	printf("\n AJAY3");
	h=(u-v)/(n+1);
	printf("\n Value of h:%f",h);
	printf("\n");
	for(i=1;i<=n;i++)
	{
		a[i]=(float)(1/pow(h,2));
		b[i]=(float)(-2/pow(h,2))+(3/h)+2;
		c[i]=(float)(1/pow(h,2)-3/h );
		d[i]=(float)1;
	}
	printf("\n AJAY4");

	d[0]=d[0]-a[0]*u;
	d[n-1]=d[n-1]-c[n-1]*v;
	printf("\n AJAY5");
	for(k=2;k<n;k++)
	{
		m=a[k]/b[k-1];
		b[k]=b[k]-m*c[k-1];
		d[k]=d[k]-m*d[k-1];
	}
	x[n]=d[n]/b[n];
	for(k=n-1;k<=1;i--)
	{
		y[k]=(d[k]-c[k]*x[k+1])/b[k];
	}
	for(i=1;i<=n;i++)
		x[i+1]=x[i]+h;
	for(i=1;i<=n;i++)
	{
		printf("%f\t%f \n ",x[i],y[i]);
		fprintf(fp,"\n%f\t%f",x[i],y[i]);
	}
	return 0;
}
