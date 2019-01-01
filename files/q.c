#include <stdio.h>
#include <math.h>
struct circle
{
 int  center;
 int  radius;
};
void fun1 ( struct circle c );
int fun2 (struct circle c1, struct circle c2);
int fun3 (struct circle c3, struct circle c4); 
int fun4 (struct circle c5, struct circle c6);

int main ()
{
struct circle pt1,pt2;
int p1,p2,p3;
fun2( pt1,pt2 ); 
fun3( pt1,pt2 );
fun4( pt1,pt2 );

p1=fun2(pt1,pt2);
if(p1==0)
printf("circles dont touch each other");

p2=fun3(pt1,pt2);
if(p2==1)
printf("circles touch each other");

p3=fun4(pt1,pt2);
if(p3==2)
printf("circles dont touch each other");

 return 0;
}
 
void fun1 ( struct circle c  )
   {
   printf( " Enter  value for center\n");
   scanf( "%d",&c.center );
   printf( " Enter  value for radius\n");
   scanf( "%d",&c.radius );
   }

int fun2(struct circle c1,struct circle c2)
   {
   if(c1.center+c2.center>c1.radius+c2.radius)
    return 0;
   }
   
int fun3(struct circle c3,struct circle c4)
   {
   if(c3.center+c4.center == c3.radius+c4.radius)
    return 1;
   }

int fun4(struct circle c5,struct circle c6)
   {
   if(c5.center+c6.center>c5.radius+c6.radius)
    return 2;
   }



















              
