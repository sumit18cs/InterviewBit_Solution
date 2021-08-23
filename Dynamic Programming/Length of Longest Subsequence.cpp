int Solution::longestSubsequenceLength(const vector<int> &v) {
    int n=v.size(),ans,i,j;
    if(n==0){return 0;}
    if(n==1){return 1;}
    int x[n+3],y[n+3];
    for(i=0;i<n;i++){x[i]=1;y[i]=1;}
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(v[i]>v[j]){x[i]=max(x[i],x[j]+1);}
        }
    }
    for(i=n-2;i>=0;i--){
        for(j=i+1;j<n;j++){
            if(v[i]>v[j]){y[i]=max(y[i],y[j]+1);}
        }
    }
    ans=max(y[0],x[n-1]);
    for(i=0;i<n;i++){
        ans=max(ans,x[i]+y[i]-1);
    }
    return ans;
}
