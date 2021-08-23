int Solution::solve(vector<int> &v) {
    int n,ans=0,i,e=0,ce=0,o=0,co=0;
    n=v.size();
    int x[n+3];
    for(i=1;i<=n;i++){x[i]=v[i-1];if(i%2==0){e+=x[i];}else{o+=x[i];}}
    for(i=1;i<=n;i++){
        if(i%2==0){e-=x[i];}
        else{o-=x[i];}
        if(ce+o==co+e){ans++;}
        if(i%2==0){ce+=x[i];}
        else{co+=x[i];}
    }
    return ans;
}
