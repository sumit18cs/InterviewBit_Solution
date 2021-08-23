int Solution::solve(int n) {
    long long int x[n+3],y[n+3],i,mod=1000000007;
    if(n%2!=0){return 0;}
    x[0]=1; x[1]=0; y[0]=0; y[1]=1;
    for(i=2;i<=n;i++){
        x[i]=(x[i-2]+2*y[i-1]); x[i]%=mod;
        y[i]=y[i-2]+x[i-1]; y[i]%=mod;
    }
    return x[n];
}
