int Solution::solve(vector<int> &v) {
    int i,n,a,ans=0;
    sort(v.begin(),v.end());
    a=1;
    n=v.size();
    if(v[n-1]==0){ans++;}
    for(i=n-2;i>=0;i--){
        if(v[i]==v[i+1]){a++;}
        else{
            if(a==v[i]){ans++;}
            a++;
        }
        // cout<<a<<" "<<ans<<" ";
    }
    if(ans==0){return -1;}
    return ans;
}
