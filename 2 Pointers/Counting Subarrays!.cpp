int Solution::solve(vector<int> &v, int x) {
    int i,j,s,a,ans=0,n=v.size();
    // for(i=0;i<n;i++){cout<<v[i]<<" ";}cout<<"\n";
    i=0;j=0;s=v[0];
    while(1){
        if(s>=x){
            if(i==j){i++;j++;if(i==n){break;}s=v[i];}
            else{
                a=j-i;
                ans+=(a);
                s-=v[i];    i++;
            }
        }    
        else{
            j++;
            if(j==n){
                a=j-i;
                ans+=(a*(a+1))/2;
                break;
            }
            s+=v[j];    
        }
        // cout<<i<<" "<<j<<" "<<s<<" "<<ans<<"\n";
    }
    return ans;
}
