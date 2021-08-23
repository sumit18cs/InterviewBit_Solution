int Solution::repeatedNumber(const vector<int> &v) {
    int i,n;
    n=v.size();
    int x[n+2];
    for(i=1;i<=n;i++){x[i]=0;}
    for(i=0;i<n;i++){
        x[v[i]]++;
        if(x[v[i]]>1){return v[i];}
    }
    return -1;
}
