#include<stdio.h>
#include<math.h>
double fact(int n){
    int i=1;
    double fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
double power(int x,int n){
    int i=1;
    double p=1;
    while(i<=n){
        p=p*x;
        i++;
    }
    return p;
}
int main(){
    int x;
    scanf("%d",&x);
    double sum=1;
    double t=1;
    double cons=0.00001;
    int i=1;
    while(t>cons){
        t=power(x,i)/fact(i);
        sum+=t;
        i++;
    }
    printf("sum =%lf\n",sum);
    printf("exp(%d)=%lf",x,exp(x)); //to execute this cc expr.c -lm
}
