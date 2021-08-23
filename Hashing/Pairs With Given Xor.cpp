int Solution::solve(vector<int> &v, int x) {
    int ans=0,n=v.size(),i;
    map<int,int>m;
    for(i=0;i<n;i++){
        if(m[x^v[i]]>0){ans++;}
        m[v[i]]++;
    }
    return ans;
}
