vector<vector<int> > Solution::solve(int k, vector<vector<int> > &v) {
    int i,j,n,m,p;
    n=v.size();
    m=v[0].size();
    int dp[n+3][m+3][k+3];
    for(i=0;i<n;i++){for(j=0;j<m;j++){dp[i][j][0]=v[i][j];}}
    for(p=1;p<=k;p++){
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                dp[i][j][p]=dp[i][j][p-1];
                if(i-1>=0){
                    dp[i][j][p]=max(dp[i][j][p],dp[i-1][j][p-1]);
                }
                if(i+1<n){
                    dp[i][j][p]=max(dp[i][j][p],dp[i+1][j][p-1]);
                }
                if(j-1>=0){
                    dp[i][j][p]=max(dp[i][j][p] ,dp[i][j-1][p-1]);
                }
                if(j+1<m){
                    dp[i][j][p]=max(dp[i][j][p],dp[i][j+1][p-1]);
                }
            }
        }
    }
    vector<vector<int> >ans;
    vector<int>v1;
    for(i=0;i<n;i++){
        v1.clear();
        for(j=0;j<m;j++){v1.push_back(dp[i][j][k]);}
        ans.push_back(v1);
    }
    return ans;
}
