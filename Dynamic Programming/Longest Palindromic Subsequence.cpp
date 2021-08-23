int dp[1010][1010],n;
string s;
int fun(int l,int r){
    if(l>r){return 0;}
    if(l==r){return 1;}
    int ans=0;
    if(l+1==r){
        if(s[l]==s[r]){return 2;}
        else{return 1;}
    }
    if(dp[l][r]!=-1){return dp[l][r];}
    if(s[l]==s[r]){
        ans=2+fun(l+1,r-1);
    }
    else{
        ans=max(fun(l+1,r),fun(l,r-1));
    }
    dp[l][r]=ans;
    return ans;
}
int Solution::solve(string A) {
    s=A;
    n=s.length();
    memset(dp,-1,sizeof(dp));
    return fun(0,n-1);
}
