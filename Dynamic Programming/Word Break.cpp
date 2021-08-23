int dp[7000],n;
string s;
int Solution::wordBreak(string A, vector<string> &dict) {
    int i,j;
    // unordered_set <string>v;
    map<string,int>m;
    n=A.length();
    s=A;
    for(i=0;i<dict.size();i++){m[dict[i]]=1;}
    for(i=0;i<=n;i++){dp[i]=0;}
    dp[0]=1;
    for(i=0;i<=n;i++){
        for(j=i-1;j>=0;j--){
            if(dp[j]==1){
                if(m.find(s.substr(j,i-j))!=m.end()){
                    dp[i]=1;break;
                }
            }
        }
    }
    return dp[n];
}
