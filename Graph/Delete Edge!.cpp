#define pb push_back
vector<int>v[100005];
int visited[100005],sum[100005],x[100005];
void dfs(int a){
    visited[a]=1;
    sum[a]=x[a];
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            dfs(v[a][i]);
            sum[a]+=sum[v[a][i]];
        }
    }
}
int Solution::deleteEdge(vector<int> &A, vector<vector<int> > &B) {
    long long int n=A.size(),i,mod=1000000007,ts,val,ans=0,a,b;
    for(i=1;i<=n;i++){visited[i]=0; visited[i]=0;   v[i].clear();}
    for(i=1;i<=n;i++){x[i]=A[i-1];}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
        v[B[i][1]].pb(B[i][0]);
    }
    dfs(1);
    ts=sum[1];
    for(i=0;i<B.size();i++){
        a=B[i][0];  b=B[i][1];
        val=min(sum[a],sum[b]);
        ans=max(ans,(val*(ts-val))%mod);
    }
    return ans%mod;
}
