#define pb push_back
#define f first
#define s second
string Solution::solve(string s, int B) {
    int n=s.length(),a,l,i,j;
    vector<pair<char,int> >v;
    a=0;    l=1;
    for(i=1;i<n;i++){
        if(s[i]==s[a]){l++;}
        else{
            v.pb({s[a],l});
            a=i;l=1;
        }
    }
    v.pb({s[a],l});
    string ans;
    for(i=0;i<v.size();i++){
        if(v[i].s!=B){
            for(j=0;j<v[i].s;j++){ans+=v[i].f;}
        }
    }
    return ans;
}
