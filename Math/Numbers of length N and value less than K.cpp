int Solution::solve(vector<int> &v, int B, int C) {
    int n,i,j,a=0,m,b=0,x[20]={0},ans;
    m=log10(C)+1;
    if(m<B){return 0;}
    if(v.size()==0){return 0;}
    if(B==1){
        int q=0;
        for(i=0;i<v.size();i++){if(v[i]<C){q++;}}
        return q;
    }
    for(i=0;i<v.size();i++){x[v[i]]=1;}
    for(i=0;i<=9;i++){if(x[i]==1){a++;}}
    string s=to_string(C);
    n=s.length();
    if(m>B){
        if(v[0]==0){return ((a-1)*pow(a,B-1));}
        else{return pow(a,B);}
    }
    for(i=1;i<s[0]-'0';i++){if(x[i]==1){b++;}}
    ans=b*(pow(a,n-1));
    i=0;
    while(1){
        if(x[s[i]-'0']==0){break;}
        i++;    b=0;
        if(i>=n){break;}
        for(j=0;j<s[i]-'0';j++){if(x[j]==1){b++;}}
        ans+=b*(pow(a,n-i-1));
    }
    return ans;
}
