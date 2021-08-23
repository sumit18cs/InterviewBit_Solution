int Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),l,r,mid,i,j,a,b,x[n+3][m+3],ans;
    l=0;r=min(n,m);
    while(l<=r){
        mid=(l+r)/2;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                x[i][j]=v[i][j];
            }
        }
        for(i=0;i<n;i++){
            for(j=1;j<m;j++){
                if(x[i][j]==1){x[i][j]+=x[i][j-1];}
            }
        }
        b=0;
        for(j=0;j<m;j++){   a=0;    
            for(i=0;i<n;i++){
                if(x[i][j]>=mid){a++;}
                else{
                    b=max(b,a); a=0;
                }
            }
            b=max(b,a);
        }
        if(b>=mid){ans=mid;l=mid+1;}
        else{r=mid-1;}
    }
    return (ans*ans);
}
