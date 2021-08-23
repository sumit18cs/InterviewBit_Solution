#define pb push_back
int Solution::isPalindrome(string s1) {
    vector<int>v,v1;
    int i;
    for(i=0;i<s1.size();i++){
        if(s1[i]-'A'>=0 && s1[i]-'A'<26){v.pb(s1[i]-'A');}
        else if(s1[i]-'a'>=0 && s1[i]-'a'<26){v.pb(s1[i]-'a');}
        else if(s1[i]-'0'>=0 && s1[i]-'0'<=9){v.pb(s1[i]-'0'+26);}
    }
    // for(i=0;i<v.size();i++){cout<<v[i]<<" ";}
    v1=v;
    reverse(v1.begin(),v1.end());
    if(v1==v){return 1;}
    else{return 0;}
}
