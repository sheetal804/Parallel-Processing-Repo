#include<stdio.h>
 gcd(int x,int y)
{
	int k=1,result;
	while(k<=x && k<y)
	{
		if(x%k==0 && y%k==0)
		result=k;
		k++;
	}
	printf("result:%d",result);
}
int gcd_rec(int m,int n)
{
	
	if(m<=n && n%m==0)
		return m;
	if(n<m)
		return gcd_rec(m,n);
	else
		return gcd_rec(m,n%m);
}		
		
int main()
{
	int a,b,k;
	scanf("%d",&a);
	scanf("%d",&b);
	k=gcd_rec(a,b);
	printf("result:%d",k);
}
