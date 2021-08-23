int Solution::solve(int n, vector<int> &v) {
    int i,ans=0,s=0,a;
    int x[n+3],y[n+3];
    for(i=0;i<n;i++){s+=v[i];x[i]=0;y[i]=0;}
    if(s%3!=0){return 0;}
    s=s/3;
    a=0;
    for(i=n-1;i>=0;i--){
        a+=v[i];
        if(a==s){y[i]=1;}
    }
    for(i=n-2;i>=0;i--){y[i]+=y[i+1];}
    // for(i=0;i<n;i++){cout<<y[i]<<" ";}
    a=0;
    for(i=0;i<n-2;i++){
        a+=v[i];
        if(a==s){ans+=y[i+2];}
    }
    return ans;
}
