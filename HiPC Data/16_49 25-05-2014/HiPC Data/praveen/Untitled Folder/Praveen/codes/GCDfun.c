#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	if(*a > *b){
		temp=*a;
		*a=*b;
		*b=temp;
	}
}
int GCD(int a,int b){
	swap(&a,&b);
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int LCM(int a,int b){
	return ((a*b)/GCD(a,b));
}
int main(){
	int a,b;
	printf("Enter two number :");
	scanf("%d %d",&a,&b);
	int l=LCM(a,b);
	int g=GCD(a,b);
	printf("LCM of %d and %d is : %d\n",a,b,l);
	printf("GCD of %d and %d is : %d\n",a,b,g);
	return 0;
}
