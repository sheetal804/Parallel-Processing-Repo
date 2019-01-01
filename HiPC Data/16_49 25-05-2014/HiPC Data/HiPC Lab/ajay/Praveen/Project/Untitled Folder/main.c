#include<stdio.h>
#include<math.h>
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
    printf("exp(%d)=%lf",x,exp(x));
    return 0;
}
