#define pb push_back
#define f first
#define s second
int Solution::solve(int A, vector<vector<int> > &B, int C, int D, vector<vector<int> > &E) {
    int n=A,start=C,fi=D,c,d,distance[n+3],dist[n+3],ans,a,i,b;
    vector<pair<int,int> >v[n+3]; 
    for(i=0;i<B.size();i++){
        v[B[i][0]].pb({B[i][1],B[i][2]});
    }
    for(i=1;i<=n;i++){dist[i]=1e9;}
    dist[start]=0;
    set<pair<int,int> >s;
    s.insert({0,start});
    while(s.size()>0){
        pair<int,int>p=*s.begin();
        s.erase(s.begin());
        a=p.s;
        for(i=0;i<v[a].size();i++){
            b=v[a][i].f;    c=v[a][i].s;
            if(dist[b]>dist[a]+c){
                s.erase({dist[b],b});
                dist[b]=dist[a]+c;
                s.insert({dist[b],b});
            }
        }
    }
    for(i=1;i<=n;i++){v[i].clear();}
    for(i=0;i<B.size();i++){
        v[B[i][1]].pb({B[i][0],B[i][2]});
    }
    for(i=1;i<=n;i++){distance[i]=1e9;}
    distance[fi]=0;
    s.insert({0,fi});
    while(s.size()>0){
        pair<int,int>p=*s.begin();
        s.erase(s.begin());
        a=p.s;
        for(i=0;i<v[a].size();i++){
            b=v[a][i].f;    c=v[a][i].s;
            if(distance[b]>distance[a]+c){
                s.erase({distance[b],b});
                distance[b]=distance[a]+c;
                s.insert({distance[b],b});
            }
        }
    }
    ans=dist[fi];
    for(i=0;i<E.size();i++){
        ans=min(ans,dist[E[i][0]]+distance[E[i][1]]+E[i][2]);
        ans=min(ans,dist[E[i][1]]+distance[E[i][0]]+E[i][2]);
    }
    if(ans==1e9){return -1;}
    return ans;
}
