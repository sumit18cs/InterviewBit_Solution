#define pb push_back
vector<int>v[100005];
int visited[100005],p=0,y,x[100005],ans;
void dfs(int a){
    visited[a]=1;
    p+=x[a];
    if(v[a].size()==1){
        if(p<=y){ans++;}
    }
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            dfs(v[a][i]);
        }
    }
    p-=x[a];
}
int Solution::solve(vector<int> &A, vector<vector<int> > &B, int C) {
    int i;
    p=0;    ans=0;
    int n=A.size(); 
    for(i=1;i<=n;i++){visited[i]=0;v[i].clear();}
    for(i=0;i<n;i++){x[i+1]=A[i];}
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb(B[i][1]);
        v[B[i][1]].pb(B[i][0]);
    }
    y=C;
    dfs(1);
    return ans;
}

