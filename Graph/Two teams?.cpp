#define pb push_back
vector<int>v[100005];
int visited[100005],check[100005];
void dfs(int a){
    visited[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            if(check[a]==1){check[v[a][i]]=2;}
            else{check[v[a][i]]=1;}
            dfs(v[a][i]);
        }
    }
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n=A,i;
    for(i=1;i<=n;i++){visited[i]=0; check[i]=0; v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
        v[B[i][1]].pb(B[i][0]);
    }
    for(i=1;i<=n;i++){
        if(visited[i]==0){
            check[i]=1;
            dfs(i);
        }
    }
    // for(i=1;i<=n;i++){cout<<check[i]<<" ";}
    for(i=0;i<B.size();i++){
        if(check[B[i][0]]==check[B[i][1]]){return 0;}
    }
    return 1;
}
