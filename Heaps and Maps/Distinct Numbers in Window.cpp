vector<int> Solution::dNums(vector<int> &v, int x) {
    int n=v.size(),i,p;
    map<int,int>m;
    vector<int>ans;
    for(i=0;i<x;i++){m[v[i]]++;}
    ans.push_back(m.size());
    p=m.size();
    for(i=x;i<n;i++){
        if(m[v[i]]==0){p++;}
        m[v[i]]++;
        if(m[v[i-x]]==1){p--;}
        m[v[i-x]]--;
        ans.push_back(p);
    }
    return ans;
}
