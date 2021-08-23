int dp[510],n;
bool pal[510][510];
string s;
int fun(int index){
    if(index==n){return 0;}
    if(dp[index]!=-1){return dp[index];}
    int ans=1e9;
    for(int i=index;i<n;i++){
        if(pal[index][i]){
            ans=min(ans,1+fun(i+1));
        }
    }
    dp[index]=ans;
    return ans;
}
int Solution::minCut(string A) {
    s=A;
    n=s.length();
    int i,j;
    for(i=n-1;i>=0;i--){
        for(j=i;j<n;j++){
            if(i==j){pal[i][j]=true;}
            else if(j==i+1){
                if(s[i]==s[j]){pal[i][j]=true;}
                else{pal[i][j]=false;}
            }
            else if(s[i]==s[j]){pal[i][j]=pal[i+1][j-1];}
            else{pal[i][j]=false;}
        }
    }
    memset(dp,-1,sizeof(dp));
    return fun(0)-1;
}
