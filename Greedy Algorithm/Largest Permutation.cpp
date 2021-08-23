#define f first
#define s second
vector<int> Solution::solve(vector<int> &v, int k) {
    int n=v.size(),i,j,a,b;
    int x[n+3],y[n+3];
    for(i=0;i<n;i++){x[v[i]]=i;y[i]=v[i];}
    j=0;
    a=n;
    while(1){
        if(k<=0 || j>=n || a<=0){break;}
        if(x[a]!=j){
            i=x[a];
            x[y[j]]=x[a];
            y[i]=y[j];
            y[j]=a;
            k--;
        }
        a--;j++;
    }
    vector<int>v1;
    for(i=0;i<n;i++){v1.push_back(y[i]);}
    return v1;
}
