#include<stdio.h>
#define max(x,y) x>y?x:y
int main()
{
	int i=5,j=10,z,k;
	z=max(i++,j++);
	
	printf("i=%d",i);
	printf("j=%d",j);
	printf("z=%d",z);
	//k=maxf(i++,j++);
	//printf("%d",k);
	return 0;
}
int maxf(int a, int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
