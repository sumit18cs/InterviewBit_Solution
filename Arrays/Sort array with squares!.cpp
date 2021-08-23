#define pb push_back
vector<int> Solution::solve(vector<int> &v) {
    int n,a,b,i;
    n=v.size();
    vector<int>v1;
    for(i=0;i<n;i++){if(v[i]>=0){break;}}
    a=i;
    b=i-1;
    while(1){
        if(b<0){
            for(i=a;i<n;i++){v1.pb(pow(v[i],2));}
            break;
        }
        if(a>=n){
            for(i=b;i>=0;i--){v1.pb(pow(v[i],2));}
            break;
        }
        if(pow(v[a],2)>=pow(v[b],2)){
            v1.pb(pow(v[b],2));    b--;
        }
        else{
            v1.pb(pow(v[a],2));    a++;
        }
    }
    return v1;
}
