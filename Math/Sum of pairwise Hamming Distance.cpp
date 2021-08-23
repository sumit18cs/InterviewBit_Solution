int Solution::hammingDistance(const vector<int> &v) {
    long long int i,n,ans=0,a,j;
    n=v.size();
    long long int x[34];
    for(i=0;i<33;i++){x[i]=0;}
    for(i=0;i<n;i++){
        a=v[i];
        for(j=0;j<32;j++){
            if(a&(1<<j)){x[j]++;}
        }
    }
    for(i=0;i<32;i++){
        // cout<<x[i]<<" ";
        ans+=(x[i])*(n-x[i]);
        ans%=(1000000007);
    }
    return (2*ans)%(1000000007);
}
