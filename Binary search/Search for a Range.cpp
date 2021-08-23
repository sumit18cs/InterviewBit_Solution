#define pb push_back
vector<int> Solution::searchRange(const vector<int> &v, int x) {
    vector<int>ans;
    int a,b,n=v.size();
    a=lower_bound(v.begin(),v.end(),x)-v.begin();
    if(a==n){ans.pb(-1);ans.pb(-1);return ans;}
    if(v[a]!=x){ans.pb(-1);ans.pb(-1);return ans;}
    b=upper_bound(v.begin(),v.end(),x)-v.begin();
    b--;
    ans.pb(a);ans.pb(b);
    return ans;
}
