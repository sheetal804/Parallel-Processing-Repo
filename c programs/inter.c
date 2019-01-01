#include<stdio.h>
#include<math.h>
typedef struct
{
	double x,y;
}point;
typedef struct 
{
	point p1,p2;
	double m;
}line;

	double caldist(point a,point b)
			{
			return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.x)*(a.y-b.y));
			}

	int inter(line l1,line l2)
	{
		point p3;				
			double a,b;
			l1.m=(l1.p2.y-l1.p1.y)/(l1.p2.x-l1.p1.x);
			l2.m=(l2.p2.y-l2.p1.y)/(l2.p2.x-l2.p1.x);
			p3.x=(l2.m*l2.p1.x-l1.m*l1.p1.x)+(l1.p1.y-l2.p1.y)/(l2.m-l1.m);
			p3.y=l1.m*(p3.x-l1.p1.x)+l1.p1.y;
			printf("point of intersection %lf\t%lf\n",p3.x,p3.y);
			a=caldist(l1.p1,l1.p2);
			b=caldist(l1.p1,p3)+caldist(p3,l1.p2);
			if(a==b)			
			return 1;
			else
			return 0;
			
			
	}
	int main()
	{
		line l1,l2;
		printf("enter the point 1\n");
		scanf("%lf%lf",&l1.p1.x,&l1.p1.y);
		printf("enter point2 for segment 1\n");
		scanf("%lf%lf",&l1.p2.x,&l1.p2.y);
		printf("Enter point1 for segment 2\n");
		scanf("%lf%lf",&l2.p1.x,&l2.p1.y); 
		printf("enter point2 for segment 2\n");
		scanf("%lf%lf",&l2.p2.x,&l2.p2.y);

		if(inter(l1,l2))
		printf("INTERSECTING\n");
		else
		printf("NOT INTERSECTING\n");
		return 0;
	}
