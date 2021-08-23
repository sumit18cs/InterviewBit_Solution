int Solution::searchInsert(vector<int> &v, int x) {
    int a,n=v.size();
    a=lower_bound(v.begin(),v.end(),x)-v.begin();
    if(a==n){return a;}
    if(v[a]==x){return a;}
    return a;
}
