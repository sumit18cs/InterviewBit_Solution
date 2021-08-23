int Solution::solve(vector<int> &v) {
    int i,s=0,ans=0,n=v.size();
    map<int,int>m;
    for(i=0;i<n;i++){
        if(v[i]==0){s--;}
        else{s++;}
        if(s==1){ans=max(ans,i+1);}
        if(m.find(s)==m.end()){m[s]=i;}
        if(m.find(s-1)!=m.end()){ans=max(ans,i-m[s-1]);}
    }
    return ans;
}
