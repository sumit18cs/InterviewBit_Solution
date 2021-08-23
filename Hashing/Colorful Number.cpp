int Solution::colorful(int n) {
    int i,a,j;
    vector<int>v;
    while(n>0){
        v.push_back(n%10); n=n/10;
    }
    reverse(v.begin(),v.end());
    map<int,int>m;
    n=v.size();
    if(n>=10){return 0;}
    int x[n+3];
    for(i=1;i<=n;i++){x[i]=v[i-1];}
    for(i=1;i<=n;i++){
        a=1;
        for(j=i;j<=n;j++){
            a=a*x[j];
            if(m[a]>0){return 0;}
            m[a]++;
        }
    }
    return 1;
}
