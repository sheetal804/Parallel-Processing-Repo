int fact(int n){
    int i=1;
    int fact=1;
    if(n==0)
        return fact;
    else{
        while(i<=n){
            fact*=i;
            i++;
        }
    }
    return fact;
}
