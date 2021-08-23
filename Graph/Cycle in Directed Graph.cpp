#define pb push_back
vector<int>v[100005];
int visited[100005],check[100005],k;
void dfs(int a){
    visited[a]=1;
    check[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            dfs(v[a][i]);
        }
        if(check[v[a][i]]==1){k=1;return;}
    }
    check[a]=0;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n=A,i;
    for(i=1;i<=n;i++){visited[i]=0;check[i]=0;v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
    }
    for(i=1;i<=n;i++){
        k=0;
        if(visited[i]==0){
            dfs(i);
            if(k==1){return 1;}
        }
    }
    return 0;
}
