#define f first
#define s second
#define pb push_back
void Solution::solve(vector<vector<char> > &A) {
    int n=A.size(),m=A[0].size(),i,j,cx,cy,visited[n+3][m+3],x[n+3][m+3],k,a;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){visited[i][j]=0;  if(A[i-1][j-1]=='X'){x[i][j]=1;}else{x[i][j]=0;}}
    }
    vector<pair<int,int> >v;
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    for(i=2;i<=n-1;i++){
        for(j=2;j<=m-1;j++){
            if(visited[i][j]==1 || x[i][j]==1){continue;}
            queue<pair<int,int> >q;
            q.push({i,j});
            a=0;
            v.clear();
            while(q.size()>0){
                pair<int,int>p=q.front();
                q.pop();
                v.pb({p.f,p.s});
                visited[p.f][p.s]=1;
                for(k=0;k<4;k++){
                    cx=p.f+dx[k];   cy=p.s+dy[k];
                    if(cx>=1 && cy>=1 && cx<=n && cy<=m && visited[cx][cy]==0 && x[cx][cy]==0){
                        if(cx==1 || cx==n || cy==1 || cy==m){a=1;}
                        q.push({cx,cy});
                        visited[cx][cy]=1;
                    }
                }
            }
            if(a==0){
                for(k=0;k<v.size();k++){x[v[k].f][v[k].s]=1;}
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(x[i+1][j+1]==1){
                A[i][j]='X';
            }
            else{A[i][j]='O';}
        }
    }
}
