int dp[1010][1010],n1,n2;
string s1,s2;
int fun(int i,int j){
    if(i>=n1 || j>=n2){return 0;}
    if(dp[i][j]!=-1){return dp[i][j];}
    int ans=0;
    if(s1[i]==s2[j]){
        ans=1+fun(i+1,j+1);
    }
    else{
        ans=max(fun(i+1,j),fun(i,j+1));
    }
    dp[i][j]=ans;
    return ans;
}
int Solution::solve(string A, string B) {
    s1=A;   s2=B;
    n1=s1.length(); n2=s2.length();
    memset(dp,-1,sizeof(dp));
    return fun(0,0);
}
