#define pb push_back
#define s second
int Solution::maximumGap(const vector<int> &v1) {
    int ans=0,i,a,mini;
    vector<pair<int,int> >v;
    for(i=0;i<v1.size();i++){
        v.pb({v1[i],i+1});
    }
    sort(v.begin(),v.end());
    mini=v[0].s;
    for(i=1;i<v.size();i++){
        a=v[i].s;
        ans=max(ans,a-mini);
        mini=min(mini,a);
    }
    return ans;
}
