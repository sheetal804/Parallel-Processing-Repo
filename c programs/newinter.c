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
	int inter(line l1,line l2)
	{
		double d1,d2;
		double m1,m2;
		double a,b,c,d;
		a=l1.p2.y-l1.p1.y;
		b=l1.p2.x-l1.p1.x;
		c=l2.p2.y-l2.p1.y;
		d=l2.p2.x-l2.p1.x;
		
			if(b==0.0)
			d1=-1;
			if(d==0.0)
			d2=-1;
			if(b!=0)
			d1=a/b;
			if(d!=0)
			d2=c/d;
		printf("%lf%lf",d1,d2);
		if(d1*d2==-1.0)
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

