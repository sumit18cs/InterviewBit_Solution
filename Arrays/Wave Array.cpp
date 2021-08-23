#define pb push_back
vector<int> Solution::wave(vector<int> &v) {
    int i,n;
    sort(v.begin(),v.end());
    n=v.size();
    if(n==1){return v;}
    vector<int>v1;
    if(n%2==0){
        for(i=0;i<n;i=i+2){
            v1.pb(v[i+1]);  v1.pb(v[i]);
        }
    }
    else{
        for(i=0;i<n-1;i=i+2){
            v1.pb(v[i+1]);  v1.pb(v[i]);
        }
        v1.pb(v[n-1]);
    }
    return v1;
}
