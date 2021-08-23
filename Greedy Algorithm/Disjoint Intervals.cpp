int Solution::solve(vector<vector<int> > &v1) {
    int ans=0,n=v1.size(),i,a;
    vector<pair<int,int> >v;
    for(i=0;i<n;i++){v.push_back({v1[i][1],v1[i][0]});}
    sort(v.begin(),v.end());
    ans=1;
    a=v[0].first;
    for(i=1;i<n;i++){
        if(v[i].second>a){
            ans++;
            a=v[i].first;
        }
    }
    return ans;
}
