int Solution::findMinXor(vector<int> &v) {
    int i,n,ans=1e9;
    n=v.size();
    sort(v.begin(),v.end());
    for(i=0;i<n-1;i++){
        ans=min(ans,v[i]^v[i+1]);
    }
    return ans;
}
