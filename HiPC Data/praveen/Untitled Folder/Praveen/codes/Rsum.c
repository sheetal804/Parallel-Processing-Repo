#include<stdio.h>
int APsum(int n){
	int temp;
	if(n==0)
		return 0;
	else{
		scanf("%d",&temp);
		return (temp+APsum(n-1));
	}
}
int main(){
	int n,a,d,temp,sum=0,pre,t;
	printf("enter the value of n: ");
	scanf("%d",&n);
	sum=APsum(n);
	printf("sum : %d\n",sum);
	return 0;
}	
	
