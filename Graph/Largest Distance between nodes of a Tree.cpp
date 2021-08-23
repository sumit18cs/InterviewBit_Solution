#define pb push_back
vector<int>v[40005];
int visited[40005],height[40005];
void dfs(int a){
    visited[a]=1;
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            height[v[a][i]]=height[a]+1;
            dfs(v[a][i]);
        }
    }
}
int Solution::solve(vector<int> &A) {
    int n=A.size(),node,i,r,ans=0;
    for(i=1;i<=n;i++){height[i]=0;  visited[i]=0;   v[i].clear();}
    for(i=0;i<n;i++){
        if(A[i]==-1){r=i+1;continue;}
        A[i]++;
        v[i+1].pb(A[i]);
        v[A[i]].pb(i+1);
    }
    
    dfs(r);
    r=0;    node=0;
    for(i=1;i<=n;i++){
        if(height[i]>r){r=height[i];    node=i;}
        //  cout<<height[i]<<" ";
    }
    for(i=1;i<=n;i++){visited[i]=0;height[i]=0;}
    dfs(node);
    ans=0;
    for(i=1;i<=n;i++){ans=max(ans,height[i]);}
    return ans;
}
