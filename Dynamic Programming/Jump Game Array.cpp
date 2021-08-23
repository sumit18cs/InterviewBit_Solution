int Solution::canJump(vector<int> &v) {
    int a,i,n=v.size(),dp[n+1],j;
    if(n<=1){return 1;}
    if(v[n-1]==0){dp[n-1]=0;}
    else{dp[n-1]=1;}
    for(i=0;i<n-1;i++){dp[i]=0;}
    for(i=n-2;i>=0;i--){
        a=i+1;
        for(j=0;j<v[i];j++){
            if(a==n){break;}
            dp[a]=1;    a++;
        }
    }
    if(v[0]==0){return 0;}
    for(i=1;i<n;i++){if(dp[i]==0){return 0;}}
    return 1;
}
