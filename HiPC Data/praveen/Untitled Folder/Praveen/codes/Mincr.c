#include<stdio.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int main()
{
  int a,b,maximum,minimum;
  printf("Enter two numbers :");
  scanf("%d",&a);
  scanf("%d",&b);
  maximum=max(a++,b++);
  minimum=min(a,b);
  printf("maximum of the two is: %d\nMinimum of two number is%d\n",maximum, minimum);
  return 0;
}
