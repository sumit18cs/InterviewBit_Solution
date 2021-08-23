int x[50000],n;
int fun(int k){
    int i,j,c,ans=0;
    int y[n+3];
    for(i=0;i<=n;i++){y[i]=0;}
    if(k==0){return 0;}
    i=1;c=0;
    for(j=1;j<=n;j++){
        if(y[x[j]]==0){
            y[x[j]]=1;
            c++;
        }
        else{y[x[j]]++;}
        if(c<=k){ans+=(j-i+1);}
        else{
            while(c>k){
                if(y[x[i]]==1){y[x[i]]--;c--;}
                else{y[x[i]]--;}
                i++;
            }
            ans+=(j-i+1);
        }
    }
    return ans;
}
int Solution::solve(vector<int> &v, int p) {
    int i;
    n=v.size();
    for(i=1;i<=n;i++){x[i]=v[i-1];}
    return fun(p)-fun(p-1);
}
