int Solution::solve(vector<vector<int> > &v) {
    int n,m,i,j,ans=0;
    n=v.size();
    m=v[0].size();
    int x[n+3][m+3];
    vector<int>v1;
    for(i=1;i<=n;i++){for(j=1;j<=m;j++){x[i][j]=v[i-1][j-1];}}
    for(j=1;j<=m;j++){
        for(i=n-1;i>=1;i--){
            if(x[i][j]!=0){x[i][j]+=x[i+1][j];}
        }
    }
    for(i=1;i<=n;i++){
        v1.clear();
        for(j=1;j<=m;j++){v1.push_back(x[i][j]);}
        sort(v1.begin(),v1.end());
        for(j=0;j<v1.size();j++){
            ans=max(ans,v1[j]*(m-j));
        }
    }
    return ans;
}
