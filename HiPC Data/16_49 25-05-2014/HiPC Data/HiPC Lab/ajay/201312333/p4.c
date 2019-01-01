#include<stdio.h>
/*int ret_digt(int a)
{
	int sum=0,c=0;
	while(a>0)
	{
		c=a%10;
		a=a/10;
		sum=sum+c;
	}
	printf("sum=%d",sum);
}
*/
int main()
{
	int x,k,sum=0,c=0;
	scanf("enter number:%d",&x);
	//ret_digt(x);
	//printf("k=%d",k);
	while(x>0)
	{
		c=x%10;
		x=x/10;
		sum=sum+c;
		printf("sum=%d",sum);
		break;
	}
	//printf("sum=%d",sum);
}
