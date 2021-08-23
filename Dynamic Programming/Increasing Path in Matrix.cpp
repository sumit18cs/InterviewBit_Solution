int Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),i,j,ans=0,dp[n+3][m+3];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0 && j==0){dp[i][j]=1;}
            else if(i==0){
                if(v[i][j]>v[i][j-1]){dp[i][j]=dp[i][j-1]+1;}
            }
            else if(j==0){
                if(v[i][j]>v[i-1][j]){dp[i][j]=dp[i-1][j]+1;}
            }
            else if(v[i][j]>v[i-1][j] && v[i][j]>v[i][j-1]){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])+1;
            }
            else if(v[i][j]>v[i-1][j]){dp[i][j]=dp[i-1][j]+1;}
            else if(v[i][j]>v[i][j-1]){dp[i][j]=dp[i][j-1]+1;}
            else{dp[i][j]=1;}
        }
    }
    for(i=0;i<n;i++){for(j=0;j<m;j++){ans=max(ans,dp[i][j]);}}
    if(ans!=n+m-1){return -1;}
    return ans;
}
