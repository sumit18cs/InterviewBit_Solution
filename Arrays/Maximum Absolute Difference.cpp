int Solution::maxArr(vector<int> &v) {
    int n,ans=0,i;
    n=v.size();
    int x[n+3],y[n+3];
    y[n-1]=v[n-1]+n-1;
    x[n-1]=v[n-1]-(n-1);
    for(i=n-2;i>=0;i--){
        y[i]=max(y[i+1],v[i]+i);
        x[i]=min(x[i+1],v[i]-i);
    }
    for(i=0;i<n-1;i++){
        ans=max(ans,y[i+1]-(v[i]+i));
        ans=max(ans,(v[i]-i)-x[i]);
    }
    return ans;
}
