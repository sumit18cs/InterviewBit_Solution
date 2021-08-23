int Solution::solve(vector<vector<int> > &v, int k) {
    int i,j,n,ans=-1e7;
    n=v.size();
    int x[n+3][n+3],y[n+3];
    for(i=1;i<=n;i++){
        x[i][0]=0;
        for(j=1;j<=n;j++){x[i][j]=v[i-1][j-1];x[i][j]+=x[i][j-1];}
    }
    for(i=1;i<=n;i++){
        if(i+k-1>n){break;}
        y[0]=0;
        for(j=1;j<=n;j++){y[j]=x[j][i+k-1]-x[j][i-1];y[j]+=y[j-1];}
        for(j=1;j<=n;j++){
            if(j+k-1>n){break;}
            ans=max(ans,y[j+k-1]-y[j-1]);
        }
    }
    return ans;
}
