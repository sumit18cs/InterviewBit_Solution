int Solution::maxp3(vector<int> &v) {
    sort(v.begin(),v.end());
    
    int ans;
    int n=v.size();
    if(n<3){return 0;}
    ans=max({v[n-1]*v[n-2]*v[n-3],v[n-1]*v[0]*v[1]});
    return ans;
}
