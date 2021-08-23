#define mp make_pair
#define pb push_back
vector<vector<string> >result;
vector<string>s;
string s1;
map<vector<string>,int>m;
int x[15][15],n,p;
bool check(int i,int j){
    int k,a,b;
    for(k=j-1;k>=1;k--){if(x[i][k]==1){return false;}}
    for(k=j+1;k<=n;k++){if(x[i][k]==1){return false;}}
    for(k=i-1;k>=1;k--){if(x[k][j]==1){return false;}}
    for(k=i+1;k<=n;k++){if(x[k][j]==1){return false;}}
    a=i;    b=j;
    while(1){
        a++;b++;
        if(a>n || b>n){break;}
        if(x[a][b]==1){return false;}
    }
    a=i;    b=j;
    while(1){
        a++;b--;
        if(a>n || b<1){break;}
        if(x[a][b]==1){return false;}
    }   
    a=i;    b=j;
    while(1){
        a--;b++;
        if(a<1 || b>n){break;}
        if(x[a][b]==1){return false;}
    } 
    a=i;    b=j;
    while(1){
        a--;b--;
        if(a<1 || b<1){break;}
        if(x[a][b]==1){return false;}
    } 
    return true;
}
void fun(int a,int r){
    int i,j;
    if(a==0 && r==n+1){
        s.clear();
        for(i=1;i<=n;i++){
            s1.clear();
            for(j=1;j<=n;j++){
                if(x[i][j]==1){s1+='Q';}
                else{s1+='.'; }
            }
            s.pb(s1);
        }
        if(m[s]==0){result.pb(s);m[s]=1;}
        return;
    }
    if(a==0 || r==n+1){return;}
    for(j=1;j<=n;j++){
        if(x[r][j]==0){
            x[r][j]=1;
            if(check(r,j)==false){x[r][j]=0;continue;} 
            fun(a-1,r+1);
            x[r][j]=0;
        }
    }
} 
vector<vector<string> > Solution::solveNQueens(int nn) {
    int i,j;
    n=nn;
    for(i=1;i<=n;i++){for(j=1;j<=n;j++){x[i][j]=0;}}
    result.clear();
    m.clear();
    fun(n,1);
    return result;
}
