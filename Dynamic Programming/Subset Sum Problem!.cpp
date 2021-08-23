int Solution::solve(vector<int> &v, int b) {
    int n=v.size(),i,j,x[n+4];
    bool dp[n+3][b+3];
    x[0]=0;
    for(i=1;i<=n;i++){x[i]=v[i-1];}
    for(i=0;i<=n;i++){
        for(j=0;j<=b;j++){
            if(i==0 && j==0){dp[i][j]=true;}
            else if(i==0){dp[i][j]=false;}
            else if(j==0){dp[i][j]=true;}
            else if(j>=x[i]){
                dp[i][j]=(dp[i-1][j-x[i]] || dp[i-1][j]);
            }
            else{dp[i][j]=dp[i-1][j];}
        }
    }
    if(dp[n][b]){return 1;}
    else{return 0;}
}
