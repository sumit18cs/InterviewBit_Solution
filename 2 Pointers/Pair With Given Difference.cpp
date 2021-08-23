int Solution::solve(vector<int> &v, int x) {
    sort(v.begin(),v.end());
    if(x<0){x=(-1)*x;}
    int l,r,a;
    if(v.size()==1){return 0;}
    l=0;r=1;
    while(1){
        if(r==v.size()){break;}
        a=abs(v[l]-v[r]);
        if(a==x){return 1;}
        if(a>x){l++;}
        else{r++;}
        if(l>=r){r=l+1;}
    }
    return 0;
}
