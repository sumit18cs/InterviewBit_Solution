int n;
vector<int>v;
vector<int> pse(){
    stack<int>s;
    vector<int>result(n,-1);
    for(int i=0;i<n;i++){
        while(s.size()>0 && v[i]<=v[s.top()]){s.pop();}
        if(s.size()>0){result[i]=v[s.top()];}
        s.push(i);
    }
    return result;
}
vector<int> Solution::prevSmaller(vector<int> &A) {
    n=A.size();
    v.clear();
    for(int i=0;i<n;i++){v.push_back(A[i]);}
    vector<int>ans=pse();
    return ans;
}
