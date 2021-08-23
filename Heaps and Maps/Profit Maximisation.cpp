int Solution::solve(vector<int> &A, int B) {
    int ans=0,i;
    multiset<int,greater<int> >s;
    for(i=0;i<A.size();i++){s.insert(A[i]);}
    while(B--){
        if(s.size()==0){break;}
        int b=(*s.begin());
        ans+=b;
        s.erase(s.begin());
        if(b!=1){s.insert(b-1);}
    }
    return ans;
}
