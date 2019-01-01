#include<stdio.h>

int main()
{
	int i=5,j=10,z,k;
	z=maxf(i++,j++);
	
	printf("i=%d",i);
	printf("j=%d",j);
	printf("z=%d",z);
	
	
	return 0;
}
int maxf(int a, int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
