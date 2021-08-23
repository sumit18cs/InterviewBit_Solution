int Solution::perfectPeak(vector<int> &v){
    int n,i,maxi;
    n=v.size();
    int x[n+3];
    x[n-1]=v[n-1];
    for(i=n-2;i>=0;i--){
        x[i]=min(x[i+1],v[i]);
    }
    maxi=v[0];
    for(i=1;i<n-1;i++){
        if(v[i]>maxi && v[i]<x[i+1]){
            return 1;
        }
        maxi=max(maxi,v[i]);
    }
    return 0;
}
