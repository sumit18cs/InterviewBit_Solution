#define f first
#define s second
int Solution::knight(int n, int m, int C, int D, int fx, int fy) {
    int x,cx,y,cy,c,visited[n+2][m+2]={0};
    queue<pair<int,pair<int,int> > >q;
    q.push({0,{C,D}});
    while(q.size()>0){
        pair<int,pair<int,int> >p=q.front();
        q.pop();
        x=p.s.f;    y=p.s.s;    c=p.f;
        if(x==fx && y==fy){return c;}
        cx=x-1; cy=y+2;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x-2; cy=y+1;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x-2; cy=y-1;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x-1; cy=y-2;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x+1; cy=y-2;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x+2; cy=y-1;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}

        cx=x+2; cy=y+1;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}
        
        cx=x+1; cy=y+2;
        if(cx>=1 && cx<=n && cy>=1 && cy<=m && visited[cx][cy]==0){q.push({c+1,{cx,cy}});   visited[cx][cy]=1;}
    }
    return -1;
}
