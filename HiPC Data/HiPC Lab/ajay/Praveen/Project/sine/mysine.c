void mysine(double *s,int x){
    double cons=0.00001,t=1.0,sum=0.0;
    int i=1;
    int z=1;
    while(t>cons){
        t=(((double)power(x,i))/fact(i));
        if(z%2==0)
            sum-=t;
        else
            sum+=t;
        i=i+2;
        z++;
    }
	*s=sum;
}
