int Solution::solve(vector<int> &v) {
    int n=v.size(),s=0,i,p=0,j,a,x[n+3];
    x[0]=0;
    for(i=0;i<n;i++){x[i+1]=v[i]; s+=v[i];}
    a=s;
    s/=2;
    int dp[n+3][s+3];
    for(i=0;i<=n;i++){
        for(j=0;j<=s;j++){
            if(i==0 && j==0){dp[i][j]=true;}
            else if(i==0){dp[i][j]=false;}
            else if(j==0){dp[i][j]=true;}
            else if(j>=x[i]){
                dp[i][j]=dp[i-1][j] || dp[i-1][j-x[i]];
            }
            else{dp[i][j]=dp[i-1][j];}
        }
    }
    for(i=s;i>=0;i--){
        for(j=1;j<=n;j++){
            if(dp[j][i]==true){p=1;break;}
        }
        if(p==1){break;}
    }
    return abs((i)-(a-i));
}
