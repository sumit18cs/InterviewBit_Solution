int Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),i,dp[n+3][4];
    dp[0][0]=v[0][0];   dp[0][1]=v[0][1];   dp[0][2]=v[0][2];
    for(i=1;i<n;i++){
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+v[i][0];
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+v[i][1];
        dp[i][2]=min(dp[i-1][0],dp[i-1][1])+v[i][2];
    }
    return min({dp[n-1][0],dp[n-1][1],dp[n-1][2]});
}
