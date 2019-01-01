#include<stdio.h>
void badswap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
}
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int a,b;
	printf("Enter two integers :");
	scanf("%d %d",&a,&b);
	badswap(a,b);
	printf("Values after badswap\na :%d\tb :%d\n",a,b);
	swap(&a,&b);
	printf("Values after swap\na :%d\tb :%d\n",a,b);
	return 0;
}
