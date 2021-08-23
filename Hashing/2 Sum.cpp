#define pb push_back
vector<int> Solution::twoSum(const vector<int> &v, int x) {
    int i,n=v.size();
    map<int,int>m;
    vector<int>ans;
    for(i=0;i<n;i++){
        if(m[x-v[i]]>0){
            ans.pb(m[x-v[i]]);  ans.pb(i+1);    return ans;
        }
        else{
            if(m[v[i]]==0){m[v[i]]=i+1;}
        }
    }
    return ans;
}
