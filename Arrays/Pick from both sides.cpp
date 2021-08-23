int Solution::solve(vector<int> &v, int a) {
    int n,ans=0,s,i;
    n=v.size(); s=0;
    int x[n+3],pre[n+3];
    for(i=1;i<=n;i++){x[i]=v[i-1];s+=x[i];}
    pre[0]=0;   
    for(i=1;i<=n;i++){
        pre[i]=pre[i-1]+x[i];
    }
    ans=max(pre[a],s-pre[n-a]);
    for(i=1;i<=a;i++){
        ans=max(ans,pre[i]+s-pre[n-(a-i)]);
    }
    return ans;
}
