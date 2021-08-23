int Solution::solve(vector<int> &v) {
    map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(int i=0;i<v.size();i++){
        if(m[v[i]]>1){return v[i];}
    }
    return -1;
}
