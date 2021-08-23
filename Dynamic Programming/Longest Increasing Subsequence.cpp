int Solution::lis(const vector<int> &v) {
    int n=v.size(),ans=0,i,j;
    int dp[n+3];
    for(i=0;i<=n;i++){dp[i]=1;}
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(v[i]>v[j]){dp[i]=max(dp[i],dp[j]+1);}
        }
    }
    for(i=0;i<n;i++){ans=max(ans,dp[i]);}
    return ans;
}
