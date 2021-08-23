#define f first
#define s second
int Solution::snakeLadder(vector<vector<int> > &l, vector<vector<int> > &s) {
    int i,x,visited[110];
    for(i=0;i<102;i++){visited[i]=0;}
    map<int,int>ml,ms;
    for(i=0;i<l.size();i++){
        ml[l[i][0]]=l[i][1];
    }
    for(i=0;i<s.size();i++){
        ms[s[i][0]]=s[i][1];
    }
    queue<pair<int,int> >q;
    q.push({0,1});
    while(q.size()>0){
        pair<int,int>p=q.front();
        q.pop();
        if(p.s==100){ return p.f;}
        visited[p.s]=1;
        x=p.s;
        // cout<<x<<" ";
        if(ml[x]>0){
            q.push({p.f,ml[x]});
            visited[ml[x]]=1;
        }
        else if(ms[x]>0){
            q.push({p.f,ms[x]});
            visited[ms[x]]=1;
        }
        else{
            for(i=1;i<=6;i++){
                if(i+x<=100 && visited[i+x]==0){
                    q.push({p.f+1,i+x});
                    visited[i+x]=1;
                }
            }
        }
    }
    return -1;
}
