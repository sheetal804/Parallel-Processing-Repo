double power(int x,int n){
    int i=1;
    double p=1;
    while(i<=n){
        p=p*x;
        i++;
    }
    return p;
}
