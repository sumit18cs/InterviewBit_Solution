int Solution::solve(vector<vector<int> > &v) {
    int n,i,j;
    n=v.size();
    int dp[n+2][n+2];
    for(i=0;i<n;i++){dp[n-1][i]=v[n-1][i];  dp[i][n-1]=v[i][n-1];}
    for(i=n-2;i>=0;i--){
        for(j=0;j<n-1;j++){
            dp[i][j]=max(dp[i+1][j],dp[i+1][j+1])+v[i][j];
        }
    }
    return dp[0][0];
}
