#define mod 1000000007
int Solution::solve(string s) {
    long long int n=s.length(),c=0,v=0,i,ans;
    ans=(n*(n+1))/2;
    ans%=mod;
    ans-=n;
    ans+=mod;   ans%=mod;
    for(i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){v++;}
        else{c++;}
    }
    for(i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){v--; ans-=v;}
        else{c--;   ans-=c;}
        ans=(ans%mod+mod)%mod;
    }
    return ans;
}
