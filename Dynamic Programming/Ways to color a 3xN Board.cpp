int dp[100001][5][5][5],n,mod=1000000007;
int fun(int index,int a,int b,int c){
    if(index==n+1){return 1;}
    if(dp[index][a][b][c]!=-1){return dp[index][a][b][c];}
    int i,j,k,ans=0;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            for(k=1;k<=4;k++){
                if(a!=i && b!=j && c!=k && i!=j && j!=k){
                    ans+=fun(index+1,i,j,k);
                    ans%=mod;
                }
            }
        }
    }
    dp[index][a][b][c]=ans;
    return ans;
}
int Solution::solve(int nn) {
    n=nn;
    memset(dp,-1,sizeof(dp));
    return fun(1,0,0,0);
}
