int dp[1000][1000],n,s,mod=1000000007;
int fun(int index,int s){
    if(s==0){return 1;}
    if(index==n+1){return 0;}
    if(dp[index][s]!=-1){return dp[index][s];}
    int ans=0;
    for(int i=0;i<=9;i++){
        if(s>=i){ans+=fun(index+1,s-i); ans%=mod;}
    }
    dp[index][s]=ans;
    return ans;
}
int Solution::solve(int A, int B) {
    n=A;    s=B;
    int ans=0;
    for(int i=1;i<=9;i++){
        memset(dp,-1,sizeof(dp));
        if(s>=i){ans+=fun(2,s-i);   ans%=mod;}
    }
    return ans;
}
