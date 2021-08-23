vector<vector<int> > Solution::diagonal(vector<vector<int> > &v) {
    int n=v.size(),i,a,b;
    vector<vector<int> >ans;
    vector<int>vec;
    for(i=0;i<n;i++){
        vec.push_back(v[0][i]);
        a=0;b=i;
        while(1){
            a++;b--;
            if(a>=n || b<0){break;}
            vec.push_back(v[a][b]);
        }
        ans.push_back(vec);
        vec.clear();
    }   
    for(i=1;i<n;i++){
        vec.push_back(v[i][n-1]);
        a=i;b=n-1;
        while(1){
            a++;b--;
            if(a>=n || b<0){break;}
            vec.push_back(v[a][b]);
        }
        ans.push_back(vec);
        vec.clear();
    }
    return ans;
}
