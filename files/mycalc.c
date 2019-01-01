#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
main(int argc,char* argv[]){
 int n1,n2,result;
 if(argc!=4){
 
 printf("4 arguments required\n");
 
 exit (0);
}
n1=atoi(argv[1]);
n2=atoi(argv[3]);
if(strcmp(argv[2],"+")==0)
 result=n1+n2;
else if(strcmp(argv[2],"-")==0)
 result=n1-n2;
else if(strcmp(argv[2],"x")==0)
 result=n1*n2;
else if(strcmp(argv[2],"/")==0)
 result=n1/n2;
else if(strcmp(argv[2],"%")==0)
 result=n1%n2;
else 
 printf("invalid operator\n");
printf("%d \n",result);
return 0;
}
     
     
