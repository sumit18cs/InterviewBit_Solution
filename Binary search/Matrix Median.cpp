int Solution::findMedian(vector<vector<int> > &v) {
    int l,r,ans,m,n=v.size(),col=v[0].size(),i,a,s;
    l=1;r=1e9;
    while(l<=r){
        m=(l+r)/2;  s=0;
        for(i=0;i<n;i++){
            a=upper_bound(v[i].begin(),v[i].end(),m)-v[i].begin();
            a--;
            if(a>=0){s+=a+1;}
        }
        if(s>(n*col/2)){
            ans=m;
            r=m-1;
        }
        else{l=m+1;}
    }
    return ans;
}
