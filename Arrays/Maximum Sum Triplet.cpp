int Solution::solve(vector<int> &v) {
    int i,n,ans=0;
    n=v.size();
    int x[n+3];
    set<int>s;
    x[n-1]=v[n-1];
    for(i=n-2;i>=0;i--){
        if(v[i]!=v[i+1]){
            x[i]=max(x[i+1],v[i+1]);
        }
        else{x[i]=x[i+1];}
    }
    s.insert(v[0]);
    for(i=1;i<n;i++){
        if(v[i]>=x[i]){;}
        else{
            auto it=s.lower_bound(v[i]);
            it--;
            // cout<<(*it)<<" ";
            if(*it<v[i]){ans=max(ans,v[i]+x[i]+(*it));}
        }
        s.insert(v[i]);
    }
    return ans;
}
