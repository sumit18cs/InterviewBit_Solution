int Solution::climbStairs(int n) {
    int x[n+3],i;
    x[1]=1;
    x[2]=2;
    for(i=3;i<=n;i++){
        x[i]=x[i-1]+x[i-2];
    }
    return x[n];
}
