#define pb push_back
void Solution::merge(vector<int> &x, vector<int> &y) {
    int a,b,l,r,i;
    a=x.size();
    b=y.size();
    l=0;r=0;
    vector<int>v;
    while(1){
        if(l==a){
            for(i=r;i<b;i++){v.pb(y[i]);}
            break;
        }
        if(r==b){
            for(i=l;i<a;i++){v.pb(x[i]);}
            break;
        }
        if(x[l]<y[r]){
            v.pb(x[l]); l++;
        }
        else{
            v.pb(y[r]); r++;
        }
    }
    x.clear();
    for(i=0;i<v.size();i++){x.pb(v[i]);}
}
