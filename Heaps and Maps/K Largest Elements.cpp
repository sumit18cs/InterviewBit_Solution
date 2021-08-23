vector<int> Solution::solve(vector<int> &v, int B) {
    int i;
    vector<int>ans;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    i=0;
    while(B--){
        ans.push_back(v[i]);i++;
    }
    return ans;
}
