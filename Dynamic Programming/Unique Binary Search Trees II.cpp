int Solution::numTrees(int a) {
    long long int n=a,i,j,dp[n+3];
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(i=3;i<=n;i++){
        dp[i]=0;
        for(j=1;j<=i;j++){
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }
    return dp[n];
}
