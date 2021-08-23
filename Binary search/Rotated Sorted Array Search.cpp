int Solution::search(const vector<int> &v, int x) {
    int i,n=v.size(),a,b,l,r,m;
    for(i=1;i<n;i++){
        if(v[i]<v[i-1]){a=i-1;break;}
    }
    if(v[a]==x){return a;}
    b=lower_bound(v.begin(),v.begin()+a,x)-v.begin();
    if(b==n){b--;}
    if(v[b]==x){return b;}
    l=a+1;r=n-1;
    while(l<=r){
        m=(l+r)/2;
        if(v[m]==x){return m;}
        if(v[m]>x){r=m-1;}
        else{l=m+1;}
    }
    return -1;
}
