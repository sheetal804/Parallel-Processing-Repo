#include<stdio.h>
void badswap(int a,int b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int a=6,b=7;
	printf("ORIGINAL VALUE %d\t%d\n",a,b);
	badswap(a,b);
	
	printf("BAD SWAP %d\t%d\n",a,b);
	swap(&a,&b);
	printf("SWAPPED VALUE %d\t%d\n",a,b);
	return 0;
}
