#include<stdio.h>
typedef struct vector{
	double x,y,z;
}vector;
void init(vector *v1){
	printf("x: ");
	scanf("%lf",&(v1->x));
	printf("y: ");
	scanf("%lf",&(v1->y));
	printf("z: ");
	scanf("%lf",&(v1->z));
}
int IsPerpendicular(vector v1, vector v2){
	if( ((v1.x*v2.x)+(v1.y*v2.y)+(v1.z*v2.z)) ==0)
		return 1;
	else
		return 0;
}	
int main(){
	vector v1,v2;
	init(&v1);
	init(&v2);
	if(IsPerpendicular(v1,v2))
		printf("These two vectors are perpendicular to each other.\n");
	else
		printf("These two vectors are not perpendicular to each other.\n");
	return 0;
}
