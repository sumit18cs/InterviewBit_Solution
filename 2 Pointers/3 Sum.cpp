int Solution::threeSumClosest(vector<int> &v1, int xx) {
    
    long long int n,current,l,r,b,i,a,ans,x=xx;
    vector<long long int>v;
    for(i=0;i<v1.size();i++){v.push_back(v1[i]);}
    sort(v.begin(),v.end());
    n=v.size();
    current=1e15;
    for(i=0;i<n-2;i++){
        a=v[i];
        l=i+1;r=n-1;
        while(1){
            if(l>=r){break;}
            b=v[l]+v[r]+a;
            if(abs(b-x)<current){
                ans=b;
                current=abs(b-x);
            }
            if(b>x){r--;}
            else{l++;}
        }
    }
    return ans;
}
