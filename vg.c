#include<string.h>
#include<stdio.h>
#include<stdarg.h>
int vsum(int num,...)
{
	va_list mylist;
	char x;	
	int sum=0,i,y;
	va_start(mylist,num);
	for(i=0;i<num;i++)
	{
		x=va_arg(mylist,int);
		//y=atoi(x);	
		printf("%d\t",x);
		sum+=x;
	}
va_end(mylist);
return sum;
}
int main(int argc,char *argv[])
{
	
	int x,a[argc],i,y=argc;
		printf("argc=%d\n",y);
		for(i=0;i<y;i++)
		{
			a[i]=atoi(argv[i+1]);
		}
		
			x=vsum(argc,a);		
			printf("Sum=%d\n",x);

return 0;
}
	
