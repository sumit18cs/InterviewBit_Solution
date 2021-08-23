int dp[200005][2],n,x[200005];
int fun(int index,int a){
    if(index==n+1){
        return 0;
    }
    if(dp[index][a]!=-1){return dp[index][a];}
    int ans=0;
    if(a==0){
        ans=max(fun(index+1,1)-x[index],fun(index+1,0));
    }
    else{
        ans=max(fun(index+1,0)+x[index],fun(index+1,1));
    }
    dp[index][a]=ans;
    return ans;
}
int Solution::maxProfit(const vector<int> &v) {
    n=v.size();
    if(n<2){return 0;}
    memset(dp,-1,sizeof(dp));
    for(int i=1;i<=n;i++){x[i]=v[i-1];}
    return fun(1,0);
}
