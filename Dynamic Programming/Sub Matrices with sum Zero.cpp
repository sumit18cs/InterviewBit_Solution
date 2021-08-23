int Solution::solve(vector<vector<int> > &v) {
    int n,m,i,j,k,ans=0,s;
    n=v.size();
    m=v[0].size();
    int x[n+3][m+3];
    
    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0){x[i][j]=0;continue;}
            x[i][j]=v[i-1][j-1];
            x[i][j]+=x[i][j-1];
        }
    }
    for(j=1;j<=m;j++){
        for(k=j;k<=m;k++){
            s=0;
            map<int,int>m1;
            m1[0]=1;
            for(i=1;i<=n;i++){
                s+=x[i][k]-x[i][j-1];
                if(m1[s]>0){ans+=m1[s];}
                m1[s]++;
            }   
            // cout<<ans<<" ";
        }
    }
    return ans;
}
