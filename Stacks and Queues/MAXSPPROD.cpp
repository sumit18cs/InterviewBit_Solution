long long int n;
vector<long long int>v;
vector< long long int >pse(){
    vector< long long int >res(n,-1);
    stack< long long int >s;
    for(long long int i=0;i< n;i++){
        while(s.size()>0 && v[i]>=v[s.top()]){
                s.pop();
        }
        if(s.size()>0){res[i]=s.top();}
        s.push(i);
    }
    return res;
}
vector< long long int >nse(){
    vector< long long int >res(n,-1);
    stack< long long int >s;
    for(long long int i=n-1;i>=0;i--){
        while(s.size()>0 && v[i]>=v[s.top()]){
                s.pop();
        }
        if(s.size()>0){res[i]=s.top();}
        s.push(i);
    }
    return res;
}
int Solution::maxSpecialProduct(vector<int> &A) {
    long long int i,mod=1000000007,ans=0;  n=A.size();
    v.clear();
    for(i=0;i<n;i++){v.push_back(A[i]);}
    vector<long long int>previous=pse();
    vector<long long int>next=nse();
    // for(i=0;i<n;i++){cout<<previous[i]<<" "<<next[i]<<"\n";}
    for(i=1;i<n-1;i++){
        if(previous[i]!=-1 && next[i]!=-1){
            ans=max(ans,previous[i]*next[i]);
        }
    }
    return (ans%mod);
}
