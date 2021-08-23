int Solution::adjacent(vector<vector<int> > &v) {
    int n=v[0].size(),i,dp[2][n+3],ans;
    dp[0][0]=v[0][0];   dp[1][0]=v[1][0];
    if(n==1){return max(dp[0][0],dp[1][0]);}
    ans=max(dp[0][0],dp[1][0]);
    dp[0][1]=v[0][1];   dp[1][1]=v[1][1];
    ans=max({ans,dp[0][1],dp[1][1]});
    if(n==2){return ans;}
    dp[0][2]=max(dp[0][0],dp[1][0])+v[0][2];
    dp[1][2]=max(dp[0][0],dp[1][0])+v[1][2];
    ans=max({ans,dp[0][2],dp[1][2]});
    for(i=3;i<n;i++){
        dp[0][i]=max({dp[0][i-2],dp[1][i-2],dp[0][i-3],dp[1][i-3]})+v[0][i];
        dp[1][i]=max({dp[0][i-2],dp[1][i-2],dp[0][i-3],dp[1][i-3]})+v[1][i];
        ans=max({ans,dp[0][i],dp[1][i]});
    }
    return ans;
}
