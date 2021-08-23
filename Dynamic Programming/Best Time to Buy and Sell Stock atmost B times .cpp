int dp[505][2][505],n,x[505];
int fun(int index,int a,int k){
    if(index==n+1){return 0;}
    if(k<0){return 0;}
    if(dp[index][a][k]!=-1){return dp[index][a][k];}
    int ans=0;
    if(a==0){
        ans=max(fun(index+1,1,k)-x[index],fun(index+1,0,k));
    }
    else{
        ans=max(fun(index+1,0,k-1)+x[index],fun(index+1,1,k));
    }
    dp[index][a][k]=ans;
    return ans;
}
int Solution::solve(vector<int> &A, int B) {
    n=A.size();
    if(n<2){return 0;}
    for(int i=1;i<=n;i++){x[i]=A[i-1];}
    memset(dp,-1,sizeof(dp));
    B=min(B,n);
    return fun(1,0,B-1);
}
