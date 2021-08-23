void Solution::arrange(vector<int> &v) {
    int i,n;
    n=v.size();
    for(i=0;i<n;i++){
        v.push_back(v[v[i]]);
    }
    v.erase(v.begin(),v.begin()+n);
}
