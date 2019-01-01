#include<stdio.h>
#include<math.h>
int sum(int n)
		{
		if(n==1)
		return 1;
		else
		return pow(2,(n%2))+sum(n/2);
		}
void boolperfect(int n)
{
	int i,s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)	
		s=s+sum(i);
	}
	if(s==n)
	printf("\nPERFECT NUMBER");
	else
	printf("\nNOT A PERFECT NUMBER");

}
	int main()
	{
		boolperfect(6);
		return 0;
	}
			
