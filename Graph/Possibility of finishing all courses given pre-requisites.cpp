#define pb push_back
vector<int>v[100005];
int visited[100005],p=0,check[100005];
void dfs(int a){
    visited[a]=1;
    check[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            dfs(v[a][i]);
        }
        if(check[v[a][i]]==1){p=1;break;}
    }
    check[a]=0;
}
int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    int n=A,i;
    for(i=1;i<=n;i++){visited[i]=0; v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i]].pb(C[i]);
    }
    for(i=1;i<=n;i++){
        if(visited[i]==0){
            p=0;
            dfs(i);
            if(p==1){return 0;}
        }
    }
    return 1;
}
