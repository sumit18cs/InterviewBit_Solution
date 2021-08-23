#define pb push_back
#define f first
#define s second
#define MAX 100005
int x[MAX],arr[MAX];
void initialize(int n)
{
        for(int i=1;i <= n;i++){x[i]=i;arr[i]=1;}
}
int root(int a)
{
        while(x[a]!=a){
            a=x[a];
        }
        return a;
}
void setunion(int a,int b)
{
        int root1=root(a);
        int root2=root(b);
        if(arr[root1] > arr[root2]){
            x[root2]=x[root1];
            arr[root1]+=arr[root2];
        }
        else{
            x[root1]=x[root2];
            arr[root2]+=arr[root1];
        }
}
int find(int a,int b)
{
        if(root(a)==root(b)){return 1;}
        else{return 0;}
}
int Solution::solve(int A, vector<vector<int> > &B) {
    int n=A,i,ans=0,c,a,b;
    initialize(n);
    vector<pair<int,pair<int,int> > >v;
    for(i=0;i<B.size();i++){
        v.pb({B[i][2],{B[i][0],B[i][1]}});
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        c=v[i].f;   a=v[i].s.f; b=v[i].s.s;
        if(find(a,b)==0){
            ans+=c;
            setunion(a,b);
        }
    }
    return ans;
}
