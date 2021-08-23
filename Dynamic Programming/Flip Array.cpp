int dp[102][500003];
int Solution::solve(const vector<int> &v) {
    int n=v.size();
    int x[n+3],m,s=0,i,j;
    if(n<2){return 0;}
    for(i=1;i<=n;i++){x[i]=v[i-1];s+=x[i];}
    m=s/2;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 && j==0){dp[i][j]=0;}
            else if(i==0){dp[i][j]=1e9;}
            else if(j==0){dp[i][j]=0;}
            else if(x[i]<=j){
                dp[i][j]=min(dp[i-1][j],dp[i-1][j-x[i]]+1);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    // cout<<m<<"";
    for(j=m;j>=1;j--){
        int ans=1e9;
        for(i=1;i<=n;i++){
            ans=min(ans,dp[i][j]);
        }
        if(ans!=1e9){return ans;}
    }
}
