#define f first
#define s second
int n,m,x[1000][1000],y[100005],len;
bool dfs(int i,int j,int a){
    if(i<1 || i>n || j<1 || j>m || x[i][j]!=y[a]){return false;}
    if(a==len && x[i][j]==y[a]){return true;}
    return (dfs(i+1,j,a+1) || dfs(i,j+1,a+1) || dfs(i-1,j,a+1) || dfs(i,j-1,a+1));
}
int Solution::exist(vector<string> &A, string B) {
    len=B.size();
    int i,j,k,a;
    n=A.size(); m=A[0].size();
    if(len==0){return 1;}
    if(n==0){return 0;}
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){x[i][j]=A[i-1][j-1]-'A';}
    }
    for(i=1;i<=len;i++){y[i]=B[i-1]-'A';}
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(x[i][j]==y[1]){
                if(dfs(i,j,1)){return 1;}
            }
        }
    }
    return 0;
}
