#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && c+b>a)
        printf("they form a triangle.\n");
    else
        printf("They cant form a triangle.\n");
    return 0;
}
