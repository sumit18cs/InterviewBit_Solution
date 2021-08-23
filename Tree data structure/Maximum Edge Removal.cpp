#define pb push_back
vector<int>v[100005];
int vis[100005],height[100005],n,ans;
void dfs(int a){
    vis[a]=1;
    height[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(vis[v[a][i]]==0){
            dfs(v[a][i]);
            height[a]+=height[v[a][i]];
        }
    }
    if(height[a]%2==0 && a!=1){ans++;}
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n=A,i;    ans=0;
    for(i=1;i<=n;i++){vis[i]=0;v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
        v[B[i][1]].pb(B[i][0]);
    }
    dfs(1);
    return ans;
}
