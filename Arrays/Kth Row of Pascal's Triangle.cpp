#define pb push_back
vector<int> Solution::getRow(int a) {
    vector<int>v,v1;
    int i;
    if(a==0){v.pb(1);return v;}
    a--;
    
    v.pb(1);v.pb(1);
    if(a==0){return v;}
    while(a>0){
        a--;
        v1.pb(1);
        for(i=0;i<v.size()-1;i++){v1.pb(v[i]+v[i+1]);}
        v1.pb(1);
        v.clear();
        v=v1;
        v1.clear();
    }
    return v;
}
