void Solution::sortColors(vector<int> &A) {
    // 0 red 1 white 2 blue
    int i;
    vector<int>v;
    for(i=0;i<A.size();i++){if(A[i]==0){v.push_back(0);}}
    for(i=0;i<A.size();i++){if(A[i]==1){v.push_back(1);}}
    for(i=0;i<A.size();i++){if(A[i]==2){v.push_back(2);}}
    A.clear();
    for(i=0;i<v.size();i++){A.push_back(v[i]);}
}
