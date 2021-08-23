int Solution::trap(const vector<int> &v) {
    int n,i;
    n=v.size();
    int x[n+3],pre[n+3],suf[n+33];
    for(i=1;i<=n;i++){x[i]=v[i-1];}
    pre[0]=0;
    for(i=1;i<=n;i++){pre[i]=max(pre[i-1],x[i]);}
    suf[n+1]=0;
    for(i=n;i>=1;i--){suf[i]=max(suf[i+1],x[i]);}
    int ans=0;
    for(i=1;i<=n;i++){
        ans+=max(min(pre[i-1],suf[i+1])-x[i],0);
    }
    return ans;
}
