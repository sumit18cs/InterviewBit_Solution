int Solution::sqrt(int n) {
    long long int l,r,m,ans;
    l=0;r=1e5;
    while(l<=r){
        m=(l+r)/2;
        if(m*m==n){return m;}
        if(m*m<n){
            ans=m;
            l=m+1;
        }
        else{r=m-1;}
    }
    return ans;
}
