int dp[705][705],n1,n2;
string s1,s2;
int fun(int i,int j){
    if(j==n2){return 1;}
    if(i==n1){return 0;}
    if(dp[i][j]!=-1){return dp[i][j];}
    int ans=0;
    if(s1[i]==s2[j]){
        ans=fun(i+1,j+1)+fun(i+1,j);
    }
    else{
        ans=fun(i+1,j);
    }
    dp[i][j]=ans;
    return ans;
}
int Solution::numDistinct(string A, string B) {
    s1=A;   s2=B;
    n1=s1.length(); n2=s2.length();
    memset(dp,-1,sizeof(dp));
    return fun(0,0);
}
