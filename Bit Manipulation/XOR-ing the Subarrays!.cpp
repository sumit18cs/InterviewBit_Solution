int Solution::solve(vector<int> &v) {
    if(v.size()==1){return v[0];}
    int n=v.size(),i,ans=0;
    if(n%2==0){return 0;}
    for(i=0;i<n;i=i+2){
        ans ^= v[i];
    }
    return ans;
}
