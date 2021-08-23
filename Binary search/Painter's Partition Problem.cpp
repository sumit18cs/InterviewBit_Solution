int Solution::paint(int paint, int x, vector<int> &v) {
    long long int l,r,m,n=v.size(),s,b,i,ans;
    l=*max_element(v.begin(),v.end());
    r=1e9;
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
        if(b<=paint){
            ans=m;
            r=m-1;
        }
        else{l=m+1;}
    }
    ans%=10000003;
    ans*=x;
    ans%=10000003;
    return ans;
}
