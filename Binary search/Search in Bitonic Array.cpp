int Solution::solve(vector<int> &v, int x) {
    int l,r,a,b,m,i,n=v.size();
    l=1;r=n-2;
    while(l<=r){
        m=(l+r)/2;
        if(v[m-1]<v[m] && v[m]<v[m+1]){l=m+1;}
        else if(v[m-1]>v[m] && v[m]>v[m+1]){r=m-1;}
        else{
            break;
        }
    }
    a=m;
    // cout<<a<<" ";
    if(v[a]==x){return a;}
    b=lower_bound(v.begin(),v.begin()+a+1,x)-v.begin();
    if(b!=n){if(v[b]==x){return b;}}
    l=a;r=n-1;
    while(l<=r){
        m=(l+r)/2;
        if(v[m]==x){return m;}
        if(v[m]>x){
            l=m+1;
        }
        else{r=m-1;}
    }
    return -1;
}
