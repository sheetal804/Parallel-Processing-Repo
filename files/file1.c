#include<stdio.h>

#include<time.h>

int main()
{
	int n,k;
	printf("Enter no of partition\n");
	scanf("%d",&n);
	double time_spent;
	int i,j,x1,x2;
	double a1,b1,c1,h,m,p,q,x[n];
	clock_t begin,end;
	printf(" for value of x \n");
	scanf("%d",&x1);

	printf("for  value of x at end \n");
	scanf("%d",&x2);
	p=x2-x1;
	q=n+1;
	h=(p/q);
	
	a1=1/(h*h);
	b1=(-2/(h*h))+(3/h)+2;
	c1=(1/(h*h))-(3/h);

	double a[n],b[n],c[n],d[n],y[n];
	FILE *fp;
	
	x[0]=x1;		begin=clock();
	
		for(i=1;i<n;i++)
		{
			x[i]=x[i-1]+h;
		}
	for(i=0;i<n;i++)
	{
	
		a[i]=a1;
		b[i]=b1;
		c[i]=c1;
		d[i]=1;
	}
	for(k=1;k<n;k++)
	{
		m=a[k]/b[k-1];
		
		b[k]=b[k]-(m*c[k-1]);
		
		d[k]=d[k]-m*d[k-1];
		
		
	}
	//printf("%lf\t",d[n-1]);
	//printf("%lf\n",b[n-1]);
	y[n-1]=d[n-1]/b[n-1];
	//printf("%lf\t",y[n-1]);
		for(k=n-2;k>=0;k--)
		{			y[k]=(d[k]-c[k]*y[k+1])/b[k];
			
		}
		fp=fopen("soe.txt","w");
		for(i=0;i<n;i++)
		{
		//fprintf(fp,"%lf\t",a[i]);
		//fprintf(fp,"%lf\t",b[i]);
		//fprintf(fp,"%lf\t",c[i]);
		//fprintf(fp,"%lf\t",d[i]);
		fprintf(fp,"%lf\t",x[i]);
		fprintf(fp,"%lf\n",y[i]);
		}
	end=clock();
		time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
		
	
	printf("TIME consumed =%lf",time_spent);
	
	return 0;
}