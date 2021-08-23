int Solution::nchoc(int A, vector<int> &B) {
    long long int ans=0,i,a,mod=1000000007;
    multiset<int,greater<int> >s;
    for(i=0;i<B.size();i++){
        s.insert(B[i]);
    }
    while(A--){
        if(s.size()==0){break;}
        a=*s.begin();
        s.erase(s.begin());
        if(a>=2){s.insert(a/2);}
        ans+=a;
        ans%=mod;
    }
    return ans;
}
