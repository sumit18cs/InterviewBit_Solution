int Solution::firstMissingPositive(vector<int> &v) {
    int ans,a,b,i,n,j;
    n=v.size();
    for(i=0;i<n;i++){
        if(v[i]>0 && v[i]<=n){
            a=v[i]-1;
            swap(v[i],v[a]);
            if(v[i]!=v[a]){i--;}
        }
    }
    for(i=0;i<n;i++){
        if(v[i]!=i+1){return i+1;}
    }
    return n+1;
}
