#include<stdio.h>
#include<math.h>
typedef struct point
{
	double x,y;
}point;
point p1,p2,p3;
double dist(point p1,point p2)
{
	double c,d;
	c=(pow((p1.x-p2.x),2)+pow((p2.x-p2.y),2));
	d=sqrt(c);
	return d;
}	
main()
{
	//point p1,p2,p3;
	double a,b,c,s=0.0,area=0.0;
	scanf("%lf",&p1.x);
	scanf("%lf",&p1.y);
	scanf("%lf",&p2.x);
	scanf("%lf",&p2.y);

	scanf("%lf",&p3.x);
	scanf("%lf",&p3.y);

	

	a=dist(p1,p2);
	b=dist(p2,p3);
	c=dist(p1,p3);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%lf",area);
}	
	
