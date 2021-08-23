#define f first 
#define s second
int Solution::solve(vector<vector<int> > &v) {
    int n=v.size(),m=v[0].size(),ans=0,i,j,k,x,cx,cy,y,a,visited[n+3][m+3];
    for(i=0;i<=n;i++){for(j=0;j<=m;j++){visited[i][j]=0;}}
    int dx[8]={-1,1,0,0,-1,-1,1,1};
    int dy[8]={0,0,-1,1,-1,1,-1,1};
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(visited[i][j]==0 && v[i][j]==1){
                queue<pair<int,int> >q;
                q.push({i,j});
                a=0;
                while(q.size()>0){
                    pair<int,int>p=q.front();
                    q.pop();
                    a++;
                    x=p.f;    y=p.s;
                    visited[x][y]=1;
                    for(k=0;k<8;k++){
                        cx=x+dx[k]; cy=y+dy[k];
                        if(cx>=0 && cy>=0 && cx<n && cy<m && visited[cx][cy]==0 && v[cx][cy]==1){
                            q.push({cx,cy});
                            visited[cx][cy]=1;
                        }
                    }
                }
                ans=max(ans,a);
            }
        }
    }
    return ans;
}
