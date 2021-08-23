int Solution::lengthOfLastWord(const string A) {
    int i;
    string s=A,s1;
    // cout<<s.length();
    for(i=s.length()-1;i>=0;i--){
        if(s[i]==' ' && s1.length()>0){break;}
        if(s[i]!=' '){s1+=s[i];}
    }
    reverse(s1.begin(),s1.end());
    return s1.length();
}
