#define pb push_back
int Solution::minimumTotal(vector<vector<int> > &v) {
    int n=v.size(),i,a=n-2;
    vector<int>ans,vv;
    for(i=0;i<n;i++){ans.pb(v[n-1][i]);}
    if(n==1){
        return (*min_element(ans.begin(),ans.end()));
    }
    while(1){
        for(i=0;i<ans.size()-1;i++){
            vv.pb(min(ans[i],ans[i+1])+v[a][i]);
        }
        ans.clear();
        for(i=0;i<vv.size();i++){ans.pb(vv[i]);}
        vv.clear();
        if(ans.size()==1){break;}
        a--;
        // cout<<ans.size()<<" ";
    }
    return ans[0];
}
