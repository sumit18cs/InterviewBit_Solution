#define f first
#define s second
int Solution::solve(int A, int B, vector<string> &ss) {
    int n=A,m=B,d[n+3][m+3],x,y,i,j,cx,cy,c,a;
    for(i=0;i<=n;i++){for(j=0;j<=m;j++){d[i][j]=1e9;}}
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,1,-1};
    char ch[4]={'U','D','R','L'};
    d[0][0]=0;
    set<pair<int,pair<int,int> > >s;
    s.insert({0,{0,0}});
    while(s.size()>0){
        pair<int,pair<int,int> >p=*s.begin();
        s.erase(s.begin());
        x=p.s.f;  y=p.s.s;  c=p.f;
        if(x==n-1 && y==m-1){return c;}
        for(i=0;i<4;i++){
            cx=x+dx[i]; cy=y+dy[i];
            if(cx<0 || cx>=n || cy<0 || cy>=m){continue;}
            a=0;
            if(ch[i]!=ss[x][y]){a=1;}
            if(d[cx][cy]>d[x][y]+a){
                s.erase({d[cx][cy],{cx,cy}});
                d[cx][cy]=d[x][y]+a;
                s.insert({d[cx][cy],{cx,cy}});
            }
        }
    }
}
