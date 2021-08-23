int Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),ans=-1e9,i,j,x[n+3][m+3],y[n+3][m+3];
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){x[i][j]=0;y[i][j]=0;}
            else{x[i][j]=v[i-1][j-1];x[i][j]+=x[i][j-1];y[i][j]=x[i][j]+y[i-1][j];}
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            ans=max(ans,y[n][m]-y[n][j-1]-y[i-1][m]+y[i-1][j-1]);       
        }
    }
    return ans;
}
