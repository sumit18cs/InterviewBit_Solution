int Solution::maxProfit(const vector<int> &v) {
    if(v.size()<2){return 0;}
    int i,mini=v[0],ans=0;
    for(i=0;i<v.size();i++){
        ans=max(ans,v[i]-mini);
        mini=min(mini,v[i]);
    }
    return ans;
}
