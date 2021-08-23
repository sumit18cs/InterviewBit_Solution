int Solution::solve(string s) {
    int n=s.length(),ans=0,i;
    for(i=0;i<s.length();i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a' || s[i]=='i' || s[i]=='o' || s[i]=='e' || s[i]=='u'){
            ans+=n;
            ans%=(10003);
        }
        n--;
    }
    return ans;
}
