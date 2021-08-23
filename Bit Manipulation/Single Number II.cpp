int Solution::singleNumber(const vector<int> &v) {
    int i,n,p,ans=0,j,a;
    n=v.size();
    p=1;
    for(j=0;j<32;j++){
        a=0;
        for(i=0;i<n;i++){
            if((v[i]&(1<<j))>0){a++;}
        }
        a=a%3;
        ans+=a*p;
        p=p*2;
    }
    return ans;
}
