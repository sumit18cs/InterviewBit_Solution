int Solution::solve(const vector<int> &v) {
    int n=v.size(),ans=2,i,j,a,b,p;
    if(n<3){return n;}
    map<int,int>m;
    int dp[n+3][n+3];
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            dp[i][j]=2;
            a=v[i];
            b=v[j];
            p=2*a-b;
            if(m[p]==0){continue;}
            dp[i][j]=max(dp[i][j],dp[m[p]-1][i]+1);
        }
        m[v[i]]=i+1;
    }
    ans=2;
    for(i=0;i<n;i++){for(j=i+1;j<n;j++){ans=max(ans,dp[i][j]);}}
    return ans;
}
