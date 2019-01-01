#include<stdio.h>
#define max 80

int main()
{
int arr1[max][max],arr2[max][max],i,j,n;

printf("enter the size of the matrix");
scanf("%d",&n);

printf("enter the elements of the matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 scanf("%d",&arr1[i][j]);
}
}

for(i<n;i=0;i--) 
{
for(j=0;j<n;j++)
{
if(i == j)
{
 i=1;
}

 arr2[i][j]=arr1[i][j];

}
}


printf("the cyclic permutation of the matrix");

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
 printf("%d",arr2[i][j]);
}
}

return 0;
}
