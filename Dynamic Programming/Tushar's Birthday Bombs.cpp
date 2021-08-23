vector<int> Solution::solve(int capacity, vector<int> &v) {
    int n=v.size(),mini,i,a,b,index;
    vector<int>v1;
    mini=1e9;
    for(i=0;i<n;i++){
        if(v[i]<mini){mini=v[i];index=i;}
    }
    a=capacity/mini;
    b=capacity%mini;
    // cout<<mini<<" "<<b<<" ";
    for(i=0;i<index;i++){
        if(v[i]-mini<=b && a>0){
            // cout<<i<<" "; 
            b-=(v[i]-mini);
            v1.push_back(i);
            a--;
            i--;
        }
    }
    // cout<<a<<" ";
    while(a>0){v1.push_back(index);a--;}
    return v1;
}
