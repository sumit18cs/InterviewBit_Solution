#define f first
#define s second
int Solution::black(vector<string> &A) {
    int n=A.size(),m=A[0].size(),ans=0,i,j,cx,cy,visited[n+3][m+3],x[n+3][m+4],k;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){visited[i][j]=0;  if(A[i-1][j-1]=='X'){x[i][j]=1;}else{x[i][j]=0;}}
    }
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(x[i][j]==0 || visited[i][j]==1){continue;}
            queue<pair<int,int> >q;
            ans++;
            q.push({i,j});
            while(q.size()>0){
                pair<int,int>p=q.front();
                q.pop();
                for(k=0;k<4;k++){
                    cx=p.f+dx[k];   cy=p.s+dy[k];
                    if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0 && x[cx][cy]==1){
                        q.push({cx,cy});
                        visited[cx][cy]=1;
                    }
                }
            }   
        }
    }
    return ans;
}
