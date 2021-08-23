int Solution::uniquePathsWithObstacles(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),dp[n+3][m+3],i,j;
    if(v[n-1][m-1]==1){return 0;}
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(v[i][j]==1){dp[i][j]=0;}
            else if(i==0 && j==0){dp[i][j]=1;}
            else if(i==0){dp[i][j]=dp[i][j-1];}
            else if(j==0){dp[i][j]=dp[i-1][j];}
            else{dp[i][j]=dp[i][j-1]+dp[i-1][j];}
        }
    }
    return dp[n-1][m-1];
}
