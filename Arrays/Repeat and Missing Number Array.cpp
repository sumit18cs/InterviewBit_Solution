#define pb push_back
vector<int> Solution::repeatedNumber(const vector<int> &v) {
    int i,ans=0,sum=0,n,a,b;
    n=v.size();
    for(i=1;i<=n;i++){
        ans ^= v[i-1];
        ans ^= i; 
    }
    int c=ans;
    vector<int>v1;
     
    a=0;
    for(i=0;i<v1.size();i++){if(v1[i]==1){a=i;break;}}
    for(i=0;i<n;i++){
        if(v[i]&(1<<a)){sum ^= v[i];}
        if((i+1)&(1<<a)){sum ^= (i+1);}
    }
    a=sum;  b=sum^ans;
    v1.clear();
    for(i=0;i<n;i++){
        if(v[i]==a){v1.pb(a);v1.pb(b);return v1;}
        if(v[i]==b){v1.pb(b);v1.pb(a);return v1;}
    }
}
