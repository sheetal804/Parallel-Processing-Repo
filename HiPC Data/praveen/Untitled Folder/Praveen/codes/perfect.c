#include<stdio.h>
int IsPerfect(int n){
	int i=1,sum=0;
	for(i;i<n;i++){
		if(n%i==0)
			sum+=i;
	}
	if(sum==n)
		return 1;
	else
		return 0;
}
int main(){
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(IsPerfect(n))
		printf("%d is a perfect number.\n",n);
	else
		printf("%d ia not a perfect number.\n",n);
	return 0;
}
