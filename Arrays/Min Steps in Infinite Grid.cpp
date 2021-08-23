int Solution::coverPoints(vector<int> &v1, vector<int> &v2) {
    int n,ans,i,x,y;
    n=v1.size();
    ans=0;
    for(i=1;i<n;i++){
        x=abs(v1[i]-v1[i-1]);
        y=abs(v2[i]-v2[i-1]);
        ans+=max(x,y);
    }
    return ans;
}
