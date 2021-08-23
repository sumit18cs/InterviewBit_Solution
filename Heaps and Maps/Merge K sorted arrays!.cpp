vector<int> Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),j,i;
    vector<int>ans;
    multiset<int>s;
    for(i=0;i<n;i++){for(j=0;j<m;j++){s.insert(v[i][j]);}}
    while(s.size()>0){
        ans.push_back(*s.begin());
        s.erase(s.begin());
    }
    return ans;
}
