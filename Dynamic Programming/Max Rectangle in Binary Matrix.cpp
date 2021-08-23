int Solution::maximalRectangle(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(), i,j,k,a[n+3],x[n+3][m+3],ans=0;
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){x[i][j]=0;}
            else{x[i][j]=v[i-1][j-1];x[i][j]+=x[i][j-1];}
        }
    }
    for(j=1;j<=m;j++){
        for(k=j;k<=m;k++){
            for(i=1;i<=n;i++){a[i]=0;}
            for(i=1;i<=n;i++){
                if(x[i][k]-x[i][j-1]==k-j+1){a[i]=1;}
            }
            for(i=2;i<=n;i++){if(a[i]!=0){a[i]+=a[i-1];}}
            for(i=1;i<=n;i++){
                ans=max(ans,(k-j+1)*(a[i]));
            }
        }
    }
    return ans;
}
