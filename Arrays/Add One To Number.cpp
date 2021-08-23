#define pb push_back
vector<int> Solution::plusOne(vector<int> &v) {
    vector<int>ans;
    int n,c,i;
    n=v.size();
    c=0;
    for(i=n-1;i>=0;i--){
        if(v[i]!=9){v[i]++;c=0;break;}
        else{v[i]=0;c=1;}
    }
    if(c==1){ans.pb(1);for(i=0;i<n;i++){ans.pb(v[i]);}}
    else{
        c=0;
        for(i=0;i<n;i++){
            if(c==0){
                if(v[i]!=0){ans.pb(v[i]);c=1;}
            }
            else{ans.pb(v[i]);}
        }
    }
    return ans;
}
