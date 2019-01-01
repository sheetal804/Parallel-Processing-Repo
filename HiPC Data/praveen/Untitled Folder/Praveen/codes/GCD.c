#include<stdio.h>
int GCD(int a, int b){
	int r;	
	if(b==0)
		return a;
	else{
		r=a%b;
		return GCD(b,r);
	}	
}
int main(){
	int a,b,g;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	g=GCD(a,b);
	printf("The GCD is :%d\n",g);
	return 0;
}
