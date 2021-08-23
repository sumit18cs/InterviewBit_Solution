#define s second
vector<vector<int> > Solution::anagrams(const vector<string> &v) {
    int i;
    string s;
    map<string,vector<int> >m;
    vector<vector<int> >ans;
    for(i=0;i<v.size();i++){
        s=v[i];
        sort(s.begin(),s.end());
        m[s].push_back(i+1);
    }
    for(auto i:m){
        ans.push_back(i.s);
    }
    return ans;
}
