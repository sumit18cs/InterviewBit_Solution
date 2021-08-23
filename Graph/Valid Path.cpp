#define f first
#define s second
string Solution::solve(int fx, int fy, int n, int r, vector<int> &x, vector<int> &y) {
    int i,j,cx,cy,nx,ny,visited[fx+2][fy+2];
    string s;
    // if(r==0){s="YES";return s;}
    queue<pair<int,int> >q;
    q.push({0,0});
    for(i=0;i<=fx;i++){
        for(j=0;j<=fy;j++){visited[i][j]=0;}
    }
    int dx[8]={1,-1,0,0,1,1,-1,-1};
    int dy[8]={0,0,1,-1,1,-1,-1,1};
    while(q.size()>0){
        pair<int,int>p=q.front();
        q.pop();
        cx=p.f; cy=p.s;
        visited[cx][cy]=1;
        if(cx==fx && cy==fy){s="YES"; return s;}
        for(i=0;i<8;i++){
            nx=cx+dx[i];    ny=cy+dy[i];
            if(nx>=0 && nx<=fx && ny>=0 && ny<=fy && visited[nx][ny]==0){
                int m=0;
                for(j=0;j<n;j++){
                    if(pow(nx-x[j],2)+pow(ny-y[j],2)<=(r*r)){
                        m=1;
                    }
                }
                if(m==0){q.push({nx,ny});visited[nx][ny]=1;}
            }
        }
    }
    s="NO";
    return s;
}
