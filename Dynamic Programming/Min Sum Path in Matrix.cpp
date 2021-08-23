int Solution::minPathSum(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),i,j,dp[n+3][m+3];
    dp[n-1][m-1]=v[n-1][m-1];
    for(i=n-2;i>=0;i--){dp[i][m-1]=dp[i+1][m-1]+v[i][m-1];}
    for(i=m-2;i>=0;i--){dp[n-1][i]=dp[n-1][i+1]+v[n-1][i];}
    for(i=n-2;i>=0;i--){
        for(j=m-2;j>=0;j--){
            dp[i][j]=min(dp[i+1][j],dp[i][j+1])+v[i][j];
        }
    }
    return dp[0][0];
}
