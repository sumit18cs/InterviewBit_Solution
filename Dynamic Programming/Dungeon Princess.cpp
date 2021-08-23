#define s second
#define f first
int Solution::calculateMinimumHP(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),i,j,dp[n+3][m+3],a;
    for(i=n-1;i>=0;i--){
        for(j=m-1;j>=0;j--){
            if(i==n-1 && j==m-1){
                dp[i][j]=min(0,v[i][j]);
            }
            else if(i==n-1){
                dp[i][j]=min(0,v[i][j]+dp[i][j+1]);
            }
            else if(j==m-1){
                dp[i][j]=min(0,v[i][j]+dp[i+1][j]);
            }
            else{
                dp[i][j]=min(0,max(dp[i+1][j],dp[i][j+1])+v[i][j]);
            }
        }
    }
    return abs(dp[0][0])+1;
}
