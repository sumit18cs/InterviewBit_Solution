int n;
vector<int>v;
vector<int>pse(){
    vector<int>res(n,-1);
    stack<int>s;
    for(int i=0;i<n;i++){
        while(s.size()>0 && v[i]<=v[s.top()]){
            s.pop();
        }
        if(s.size()>0){res[i]=s.top();}
        s.push(i);
    }
    return res;
}
vector<int>nse(){
    vector<int>res(n,n);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && v[i]<=v[s.top()]){
            s.pop();
        }
        if(s.size()>0){res[i]=s.top();}
        s.push(i);
    }
    return res;
}
int Solution::largestRectangleArea(vector<int> &A) {
    n=A.size();
    int i;
    v.clear();
    for(i=0;i<n;i++){v.push_back(A[i]);}
    vector<int>pre=pse();
    vector<int>suf=nse();
    // for(i=0;i<n;i++){cout<<pre[i]<<" ";}cout<<"\n";
    // for(i=0;i<n;i++){cout<<suf[i]<<" ";}cout<<"\n";
    int ans=0;
    for(i=0;i<n;i++){
        ans=max(ans,v[i]*(suf[i]-pre[i]-1));
    }
    return ans;
}
