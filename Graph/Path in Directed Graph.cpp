#define pb push_back
vector<int>v[100005];
int visited[100005]={0};
void dfs(int a){
    // cout<<a<<" ";
    visited[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            dfs(v[a][i]);
        }
    }
}
int Solution::solve(int x, vector<vector<int> > &B) {
    int i;
    for(i=0;i<=x;i++){visited[i]=0;v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
    }
    
    dfs(1);
    if(visited[x]==1){return 1;}
    else{return 0;}
}
