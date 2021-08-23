int dp[20][(1<<20)],n,cal[20][20],len[20];
int fun(int prev,int mask){
    if(__builtin_popcount(mask)==n){return 0;}
    if(dp[prev][mask]!=-1){return dp[prev][mask];}
    int ans=1e9,i;
    for(i=0;i<n;i++){
        if((mask & (1<<i))==0){
            // le sakte hai
            ans=min(ans,fun(i,(mask | (1<<i)))+len[i]-cal[prev][i]);
        }
    }
    dp[prev][mask]=ans;
    return ans;
}
int Solution::solve(vector<string> &v) {
    int i,j,a,b,c,ans=1e9,m;
    n=v.size();
    for(i=0;i<n;i++){len[i]=v[i].length();}
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){cal[i][j]=len[i];}
            else{
                cal[i][j]=0;
                a=min(len[i],len[j]);
                while(a>0){
                    b=len[i]-a;
                    c=0;
                    // cout<<a<<" "<<b<<" "<<c<<"\n";
                    m=0;
                    while(b<len[i]){
                        // cout<<v[i][b]<<" "<<v[j][c]<<"\n";
                        if(v[i][b]!=v[j][c]){m=1;break;}
                        b++;    c++;
                    }
                    if(m==0){cal[i][j]=a;break;}
                    a--;
                }
            }
        }
    }
    // for(i=0;i<n;i++){for(j=0;j<n;j++){cout<<cal[i][j]<<" ";}cout<<"\n";}
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++){
        ans=min(ans,len[i]+fun(i,(1<<i)));
    }
    return ans;
}
