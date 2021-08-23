int Solution::solve(vector<vector<int> > &v) {
    int i,n,j,ans;
    n=v.size();
    int dp[n+3];
    // sort(v.begin(),v.end());
    dp[0]=1;
    for(i=0;i<n;i++){dp[i]=1;}
    ans=1;
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(v[i][0]>v[j][1]){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
        ans=max(ans,dp[i]);
    }
    return ans;
}
