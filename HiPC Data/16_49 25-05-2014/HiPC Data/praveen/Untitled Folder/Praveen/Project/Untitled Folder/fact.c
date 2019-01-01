double fact(int n){
    int i=1;
    double fact=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    return fact;
}
