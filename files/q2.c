#include <stdio.h>
#include <math.h>
struct point
{
float x;
float y;
};
void fpoint ( struct point pc );
float Isperpendicular (struct point p1, struct point p2,struct point p3,struct point p4);

int main ()
{
struct point pt1, pt2,pt3,pt4 ;
float p;
fpoint( pt1 ); 
fpoint( pt2 );
fpoint( pt3 );
fpoint(pt4 ); 
 
p=Isperpendicular( pt1, pt2,pt3,pt4);
 
 if(p==-1.00)
  printf("both the point is perpendicular to each other\n");
  else
    printf(" point are not perpendicular to each other\n");
 return 0;
}
 
void fpoint ( struct point pc  )
   {
   printf( " Enter X value for point\n");
   scanf( "%f",&pc.x );
   printf( " Enter Y value for point\n");
   scanf( "%f",&pc.y);
   }

float Isperpendicular (struct point p1,struct point p2,struct point p3,struct point p4)
   {
     float p,m1,m2;
     m1=((p2.y-p1.y)/(p2.x-p1.x));
     m2=((p4.y-p3.y)/(p4.x-p3.x));
     p=m1*m2;
     return p;
   }
