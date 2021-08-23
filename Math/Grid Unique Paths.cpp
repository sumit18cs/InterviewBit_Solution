int Solution::uniquePaths(int n, int m) {
    int dp[n+2][m+2],i,j;
    dp[n][m]=1;
    for(i=n-1;i>=1;i--){dp[i][m]=dp[i+1][m];}
    for(i=m-1;i>=1;i--){dp[n][i]=dp[n][i+1];}
    for(i=n-1;i>=1;i--){
        for(j=m-1;j>=1;j--){
            dp[i][j]=dp[i][j+1]+dp[i+1][j];
        }
    }    
    return dp[1][1];
}
