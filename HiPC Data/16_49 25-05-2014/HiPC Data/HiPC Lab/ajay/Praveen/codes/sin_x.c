#include<stdio.h>
#include<math.h>
double fact(int n){
    int i=1;
    double fact=1;
    if(n==0)
        return 1;
    else{
        while(i<=n){
            fact*=i;
            i++;
        }
    }
    return fact;
}
double power(int x,int n){
    int i=1;
    double p=1;
    if(n==0)
        return 1;
    else{
        while(i<=n){
            p=p*x;
            i++;
        }
    }
    return p;
}
int main(){
    int x;
    scanf("%d",&x);
    double cons=0.00001;
    double t=1;
    double sum=0;
    int i=1;
    int z=1;
    while(t>cons){
        t=power(x,i)/fact(i);
        if(z%2==0)
            sum-=t;
        else
            sum+=t;
        i=i+2;
        z++;
    }
    printf("sum= %lf\n",sum);
    printf("sin(%d)=%lf\n",x,sin(x));
    return 0;
}
