int Solution::maximumGap(const vector<int> &v) {
    if(v.size()<2){return 0;}
    int n=v.size();
    int x[n+3],i;
    for(i=0;i<n;i++){x[i]=v[i];}
    sort(x,x+n);
    // sort(v.begin(),v.end());
    int ans=0;
    for(i=1;i<v.size();i++){ans=max(ans,x[i]-x[i-1]);}
    return ans;
}
