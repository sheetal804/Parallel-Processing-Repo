#include<stdio.h>
#include<math.h>
typedef struct point
{
	double x,y;
}point;
double caldist(point a,point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.x)*(a.y-b.y));
}
	int main()
	{
		point a,b,c;
		double d1,d2,d3,s,area;
		printf("Enter the first points\n");
		scanf("%lf%lf",&a.x,&a.y); 
		printf("Enter the second points\n");
		scanf("%lf%lf",&b.x,&b.y); 
		printf("Enter the third points\n");
		scanf("%lf%lf",&c.x,&c.y); 
		
		d1=caldist(a,b);
		d2=caldist(b,c);
		d3=caldist(c,a);
		s=(d1+d2+d3)/2.0;
		area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
		if(area==0.0)
		printf("colinear points\n");
		else
		printf("AREA OF THE TRIANGLE = %lf\n",area);
	return 0;
}
		
