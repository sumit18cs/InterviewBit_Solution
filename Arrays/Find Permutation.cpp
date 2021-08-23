#define pb push_back
vector<int> Solution::findPerm(const string s, int n) {
    int a,b,i;
    a=1;b=n;
    vector<int>v;
    for(i=s.length()-1;i>=0;i--){
        if(s[i]=='I'){v.pb(b);b--;}
        else{v.pb(a);a++;}
    }
    v.pb(a);
    reverse(v.begin(),v.end());
    return v;
}
