#include<stdio.h>
int fab(int count){
	int i=0,j=1,n=0;
	int fact=0;
	while(count!=n){
		fact=i+j;
		i=j;
		j=fact;
		n++;
	}
	return fact;
}
int main(){
	int n,num;
	printf("Enter a number : ");
	scanf("%d",&n);
	num=fab(n);
	printf("The %dth fibanacci number is :%d\n",n,num);
	return 0;
}
