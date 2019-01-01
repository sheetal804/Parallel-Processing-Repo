#include<stdio.h>
int (*PFunction)(int a, int b);
int GCD(int a,int b){
	int r;
	while(b!=0){
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int FMAX(int a, int b){
	return a>b?a:b;
}
int main(){
	int g,max,a,b;
	scanf("%d%d",&a,&b);
	PFunction=&GCD;
	g=(*PFunction)(a,b);
	PFunction=&FMAX;
	max=(*PFunction)(a,b);
	printf("GCD :%d\nMAX :%d\n",g,max);
	return 0;
}	
