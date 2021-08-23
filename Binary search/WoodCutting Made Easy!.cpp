int Solution::solve(vector<int> &v, int x) {
    int l,r,m,a,i,ans;
    int n=v.size();
    l=0;    r=1e6;
    while(l<=r){
        m=(l+r)/2;
        a=0;
        for(i=0;i<n;i++){
            a+=max(v[i]-m,0);
        }
        if(a==x){return m;}
        if(a>x){
            ans=m;
            l=m+1;
        }
        else{r=m-1;}
    }
    return ans;
}
