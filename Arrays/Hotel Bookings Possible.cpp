#define pb push_back
#define f first
#define s second
bool Solution::hotel(vector<int> &st, vector<int> &fi, int k) {
    int i,a,b;
    vector<pair<int,int> >v;
    for(i=0;i<st.size();i++){
        v.pb({st[i],1});
        v.pb({fi[i],0});
    }
    sort(v.begin(),v.end());
    a=0;    b=0;
    for(auto i:v){
        if(i.s==1){a++;if(a>k){return 0;}}
        else{a--;}
    }
    return 1;
}
