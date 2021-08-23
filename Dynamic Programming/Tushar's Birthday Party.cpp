int Solution::solve(const vector<int> &reqcap, const vector<int> &dishcap, const vector<int> &cost) {
    int ans=0,maxi,n=dishcap.size(),i,j;
    maxi=*max_element(reqcap.begin(),reqcap.end());
    int dp[maxi+3];
    dp[0]=0;
    for(i=1;i<=maxi;i++){dp[i]=1e9;}
    for(i=0;i<n;i++){
        for(j=1;j<=maxi;j++){
            if(dishcap[i]<=j){
                dp[j]=min(dp[j-dishcap[i]]+cost[i],dp[j]);
            }
        }
    }
    // for(j=1;j<=maxi;j++){cout<<dp[j]<<" ";}
    for(i=0;i<reqcap.size();i++){ans+=dp[reqcap[i]];}
    return ans;
}
