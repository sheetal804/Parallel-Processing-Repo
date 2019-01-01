#include<stdio.h>
typedef struct
{
	int comp,swap;
}count;
count swap(int *a,int n)
{
	count c; 
	c.comp=0,c.swap=0;
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			c.comp++;
			if(a[j]>a[j+1])
			{
				c.swap++;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}	
return c;
}
int main()
{
	int n;
	count c;
	printf("enter the number of elements in array\n");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	c=swap(a,n);
	printf("number of comparison %d\n",c.comp);
	printf("NUMBER OF SWAPS %d\n",c.swap);
	return 0;
}
