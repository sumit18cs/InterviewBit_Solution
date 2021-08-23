#define pb push_back
vector<int> Solution::equal(vector<int> &v) {
    int i,j,k,a,n=v.size(),p;
    vector<int>ans;
    map<int,int>m;
    for(i=0;i<n;i++){m[v[i]]=i+1;}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){continue;}
            for(k=0;k<n;k++){
                if(j==k || k==i){continue;}
                for(p=0;p<n;p++){
                    if(p==k || p==j || p==i){continue;}
                    if(v[i]+v[j]==v[k]+v[p]){ans.pb(i); ans.pb(j);  ans.pb(k);  ans.pb(p);return ans;}
                }
            }
        }
    }
    return ans;
}
