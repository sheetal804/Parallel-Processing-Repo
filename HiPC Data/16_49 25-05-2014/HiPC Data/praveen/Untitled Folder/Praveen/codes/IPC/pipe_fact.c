#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
double factorial(int n){
	double fact=1;
	int i;
	for(i=2;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int n;
	double fact,num;
	int p[2];
	pipe(p);
	if(fork()==0){
		printf("PARENT :\nEnter a number :");
		scanf("%d",&n);
		fact=factorial(n);
		write(p[1],&fact,sizeof(fact));
		close(p[1]);
		printf("PARENT :\nExiting...\n\n");
	}
	else{
		wait(0);
		printf("CHILD :\nFactorial is :");
		read(p[0],&num,sizeof(num));
		printf("%.0lf\n",num);
		close(p[0]);
		printf("CHILD :\nExiting...\n\n");
		return 0;
	}
}
