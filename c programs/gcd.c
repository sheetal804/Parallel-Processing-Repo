#include<stdio.h>
int gcd(int a,int b)
{
	if(a>b)
	return b;
	else
	return gcd(b,a%b);

}
int main()
{
	int a=5,b=10,c;
	c=gcd(a,b);
	printf("%d",c);
	printf("\t%d\n",((a*b)/c));
return 0;
}
	
