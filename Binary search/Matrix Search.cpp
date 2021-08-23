int Solution::searchMatrix(vector<vector<int> > &v, int x) {
    if(v[0][0]>x){return 0;}
    int n=v.size(),m=v[0].size(),i,a,b;
    vector<int>v1;
    for(i=0;i<n;i++){v1.push_back(v[i][0]);}
    a=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
    if(a==n){a--;}
    else{if(v[a][0]==x){return 1;}  a--;}
    v1.clear();
    for(i=0;i<m;i++){
        v1.push_back(v[a][i]);
    }
    b=lower_bound(v1.begin(),v1.end(),x)-v1.begin();
    if(b==n){b--;}
    if(v[a][b]==x){return 1;}
    return 0;
}
