int Solution::solve(vector<int> &v, int a) {
    int n=upper_bound(v.begin(),v.end(),a)-v.begin();
    return (n);    
}
