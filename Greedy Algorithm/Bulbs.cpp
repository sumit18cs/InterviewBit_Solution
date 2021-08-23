int Solution::bulbs(vector<int> &v) {
    int ans=0,n=v.size(),i,a=0;
    for(i=0;i<n;i++){
        if(a%2==0){
            if(v[i]==0){
                ans++;
                a++;
            }
        }
        else{
            if(v[i]==1){ans++;a++;}
        }
    }
    return ans;
}
