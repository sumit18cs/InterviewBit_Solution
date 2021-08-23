#define pb push_back
vector<int>v[400005];
int visited[400005],parent[400005],p;
void dfs(int a){
    visited[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            parent[v[a][i]]=a;
            dfs(v[a][i]);
        }
        else{
            if(parent[a]!=v[a][i]){p=1;break;}
        }
    }
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n=A,i;
    for(i=1;i<=n;i++){visited[i]=0; v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
        v[B[i][1]].pb(B[i][0]);
    }
    for(i=1;i<=n;i++){
        if(visited[i]==0){
            p=0;
            parent[i]=i;
            dfs(i);
            if(p==1){return 1;}
        }
    }
    return 0;
}
