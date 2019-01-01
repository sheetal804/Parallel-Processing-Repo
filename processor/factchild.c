#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int p[2],n,i;
	
	int f=1;
	
	char a[20];
	pipe(p);
	printf("Enter an interger\n");
	scanf("%d",&n);
	if(!fork())
	{
		wait(0);
		//printf("child is reading\n");
		read(p[0],a,c);
		printf("%d",c);
		//printf("Factorail is :- \n");
		for(i=0;i<c;i++)
		{
		printf("%d",a[i]);
		}		
		close(p[0]);
		//printf("\nchild is exiting\n");
	}
	else
	{
		int d,r=0,c=0;
		for(i=1;i<=n;i++)
		{
			f=f*i;
		}
		while(f!=0)
		{
			d=f%10;
			r=r*10+d;
			c++;
			f=f/10;
		}
		i=0;
		while(r!=0)
		{
			d=r%10;
			a[i]=itoa(d);
			r=r/10;
			i++;

		}

		//printf("parent is writing\n");
		write(p[1],&a,&c);	
		close(p[1]);
		//printf("\n parent is exiting\n");
	}
	return 0;
}
