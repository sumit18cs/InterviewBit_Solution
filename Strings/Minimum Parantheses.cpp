int Solution::solve(string s) {
    int a=0,i,ans=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='('){a++;}
        else{a--;}
        if(a<0){ans++;a=0;}
    }
    if(a>0){ans+=a;}
    return ans;
}
