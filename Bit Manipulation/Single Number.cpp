int Solution::singleNumber(const vector<int> &v) {
    int i,ans=0;
    for(i=0;i<v.size();i++){ans ^= v[i];}
    return ans;
}
