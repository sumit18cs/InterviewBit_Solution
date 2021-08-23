#define pb push_back
vector<vector<int>> Solution::subsets(vector<int>& v) {
    vector<vector<int> >ans;
    set<vector<int> >s;
    int i,n=v.size(),j;
    for(i=0;i<(1<<n);i++){
        vector<int>a;
        for(j=0;j<n;j++){
            if(i&(1<<j)){
                a.pb(v[j]);
            }
        }
        sort(a.begin(),a.end());
        s.insert(a);
    }
    for(auto i:s){
        ans.pb(i);
    }
    return ans;
}
