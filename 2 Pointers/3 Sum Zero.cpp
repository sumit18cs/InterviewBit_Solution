#define pb push_back
vector<vector<int> > Solution::threeSum(vector<int> &arr) {
    long long int n,current,l,r,b,i,a;
    vector<long long int>v;
    vector<int>v1;
    vector<vector<int> >ans;
    for(i=0;i<arr.size();i++){v.push_back(arr[i]);}
    sort(v.begin(),v.end());
    n=v.size();
    // for(i=0;i<n;i++){cout<<v[i]<<" ";}cout<<"\n";
    for(i=0;i<n-2;i++){
        a=v[i];
        l=i+1;r=n-1;
        while(1){
            if(l>=r){break;}
            b=v[l]+v[r]+a;
            // if(i==0){cout<<l<<" "<<r<<" "<<a<<" "<<v[l]<<" "<<v[r]<<"\n";}
            if(b==0){
                v1.clear();
                v1.pb(a);   v1.pb(v[l]); v1.pb(v[r]);
                sort(v1.begin(),v1.end());
                ans.pb(v1);
                l++;r--;
            }
            else if(b>0){r--;}
            else{l++;}
        }
    }
    
    sort(ans.begin(),ans.end());
    auto it = unique(ans.begin(), ans.end());
    ans.resize(distance(ans.begin(), it));
    return ans;
}
