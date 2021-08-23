int Solution::mice(vector<int> &m, vector<int> &h) {
    int ans=0,i;
    sort(m.begin(),m.end());
    sort(h.begin(),h.end());
    for(i=0;i<m.size();i++){
        ans=max(ans,abs(m[i]-h[i]));
    }
    return ans;
}
