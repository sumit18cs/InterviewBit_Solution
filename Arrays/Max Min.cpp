int Solution::solve(vector<int> &v) {
    int a=-1e9,b=1e9,i;
    for(i=0;i<v.size();i++){
        a=max(a,v[i]);
        b=min(b,v[i]);
    }
    return a+b;
}
