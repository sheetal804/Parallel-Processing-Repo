#include<stdio.h>
int length(char str[])
{
    int count=0,i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str[50],fname[15],mname[15],lname[20];
    scanf("%[^\n]",str);
    int l=length(str);
    int i=0;
    while(str[i]!=' '){
        fname[i]=str[i];
        i++;
    }
    fname[i]='\0';
    i++;
    int j=0;
    while(str[i]!=' '){
        mname[j]=str[i];
        i++;
        j++;
    }
    mname[j]='\0';
    i++;
    j=0;
    while(str[i]!='\0'){
        lname[j]=str[i];
        i++;
        j++;
    }
    lname[j]='\0';
    printf("First Name :%s\nMiddle Name :%s\nLast Name :%s\n",fname,mname,lname);
    return 0;
}
