int power(int x,int n){
    int i=1;
    int p=1;
    if(n==0)
        return p;
    else{
        while(i<=n){
            p=p*x;
            i++;
        }
    }
    return p;
}
