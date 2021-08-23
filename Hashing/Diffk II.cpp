int Solution::diffPossible(const vector<int> &v, int k) {
    int n=v.size(),i;
    map<int,int>m;
    for(i=0;i<n;i++){
        if(m[v[i]+k]>0){return 1;}
        if(m[v[i]-k]>0){return 1;}
        m[v[i]]++;
    }
    return 0;
}
