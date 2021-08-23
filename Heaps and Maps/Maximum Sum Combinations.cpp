#define pb push_back
#define f first
#define s second
vector<int> Solution::solve(vector<int> &v1, vector<int> &v2, int C) {
    int n=v1.size(),i,a,b;
    set<pair<int,pair<int,int> > ,greater<pair<int,pair<int,int> > > >s;
    vector<int>ans;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    s.insert({v1[n-1]+v2[n-1],{n-1,n-1}});
    while(1){
        auto p=*s.begin();
        s.erase(s.begin());
        ans.pb(p.f);
        if(ans.size()>=C){break;}
        a=p.s.f;    b=p.s.s;
        if(a-1>=0){s.insert({v1[a-1]+v2[b],{a-1,b}});}
        if(b-1>=0){s.insert({v1[a]+v2[b-1],{a,b-1}});}
    }
    return ans;
}
