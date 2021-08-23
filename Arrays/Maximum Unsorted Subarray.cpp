vector<int> Solution::subUnsort(vector<int> &v) {
    int n,a,b,i;
    n=v.size();
    vector<int>v1;
    for(i=0;i<n;i++){v1.push_back(v[i]);}
    sort(v1.begin(),v1.end());
    a=-1;
    for(i=0;i<n;i++){
        if(v[i]!=v1[i]){a=i;break;}
    }
    if(a==-1){v.clear();v.push_back(-1); return v;}
    for(i=n-1;i>=0;i--){
        if(v[i]!=v1[i]){b=i;break;}
    }
    v1.clear();
    v1.push_back(a);    v1.push_back(b);
    return v1;
}
// O(n) aacha logic hai
