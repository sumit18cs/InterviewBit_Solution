int Solution::books(vector<int> &v, int x) {
    if(x>v.size()){return -1;}
    long long int a,b,l,r,i,s,m,n=v.size(),ans;
    a=*max_element(v.begin(),v.end());
    l=a;r=1e10;
    while(l<=r){
        m=(l+r)/2;
        s=v[0]; b=1;
        for(i=1;i<n;i++){
            if(s+v[i]>m){
                b++;
                s=v[i];
            }
            else{s+=v[i];}
        }
        if(b<=x){
            ans=m;
            r=m-1;
        }
        else{l=m+1;}
    }
    return ans;
}
