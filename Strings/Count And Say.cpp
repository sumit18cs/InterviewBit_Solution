#define pb push_back
#define f first
#define s second
string Solution::countAndSay(int n) {
    int b=n,a,l,i;
    string ans;
    ans="1";
    b--;
    while(b>0){
        vector<pair<char,int> >v;
        a=0;    l=1;
        for(i=1;i<ans.length();i++){
            if(ans[i]==ans[a]){l++;}
            else{
                v.pb({ans[a],l});
                a=i;l=1;
            }
        }
        v.pb({ans[a],l});
        ans="";
        for(i=0;i<v.size();i++){
            ans+=v[i].s+'0';
            ans+=v[i].f;
        }
        b--;
    }
    return ans;
}
// 50 se 60 ke aas paas
