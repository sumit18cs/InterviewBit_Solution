#define pb push_back
vector<vector<int> > Solution::solve(int a) {
    vector<vector<int> >v;
    if(a==0){return v;}
    vector<int>v1,v2;
    int i;
    v2.pb(1);
    v.pb(v2);
    if(a==1){return v;}
    a--;
    while(a>0){
        a--;
        v1.pb(1);
        for(i=0;i<v2.size()-1;i++){v1.pb(v2[i]+v2[i+1]);}
        v1.pb(1);
        v.pb(v1);
        v2.clear();
        v2=v1;
        v1.clear();
    }
    return v;
}
