int Solution::numDecodings(string s) {
    int n,i,mod=1000000007;
    n=s.length();
    int dp[n+3],x[n+3];
    int a=0;int b=0;
    if(s[0]=='0'){return 0;}
    for(i=1;i<=n;i++){x[i]=s[i-1]-'0';}
    dp[0]=1;dp[1]=1;
    if(x[1]==0){a++;}
    for(i=2;i<=n;i++){
        if(x[i]==0){a++;}
        else{a=0;}
        if(x[i]!=0){dp[i]=dp[i-1];}
        else{dp[i]=dp[i-2];}
        if(x[i]==0 && 10*x[i-1]>26){return 0;}
        if(x[i-1]!=0 && x[i]!=0 && 10*x[i-1]+x[i]<=26){dp[i]+=dp[i-2];}
        if(a>=2){return 0;}
        dp[i]%=mod;
    }
    return dp[n];
}
