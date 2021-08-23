int Solution::solve(vector<vector<int> > &v1) {
    int i,a,ans=0;
    vector<pair<int,int> >v;
    for(i=0;i<v1.size();i++){
        v.push_back({v1[i][0],1});
        v.push_back({v1[i][1],0});
    }
    sort(v.begin(),v.end());
    a=0;
    for(auto i:v){
        if(i.second==1){a++;}
        else{a--;}
        ans=max(ans,a);
    }
    return ans;
}
