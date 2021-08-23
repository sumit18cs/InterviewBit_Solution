int Solution::solve(vector<int> &v, vector<int> &v1, int m) {
    int  n,i,j;
    n=v.size();
    int weight[n+3],value[n+3],dp[n+2][m+3];
    for(i=0;i<=n;i++){for(j=0;j<=m;j++){dp[i][j]=0;}}
    for(i=1;i<=n;i++){value[i]=v[i-1];  weight[i]=v1[i-1];}
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){dp[i][j]=0;}
            else if(weight[i]<=j){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
            }
            else{dp[i][j]=dp[i-1][j];}
        }
    }
    return dp[n][m];
}
