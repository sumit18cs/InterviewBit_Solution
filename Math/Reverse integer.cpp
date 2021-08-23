int Solution::reverse(int n) {
    int a=0,m=0,b;
    if(n<0){a=1;n=(-1)*n;}
    while(n>0){
        b=n%10;
        if(m>=INT_MAX/10){return 0;}
        m=10*m+b;
        n/=10;
    }
    if(a==1){m=(-1)*m;}
    return m;
}
