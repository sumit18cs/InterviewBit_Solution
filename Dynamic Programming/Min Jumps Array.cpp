#define f first
#define s second
int Solution::jump(vector<int> &v1) {
    if(v1.size()==1){return 0;}
    if(v1[0]==0){return -1;}
    int ans=0,n=v1.size(),i,a,r;
    int target=n;
    vector<pair<int,int> >v;
    for(i=0;i<n;i++){
        v.push_back({(i+1),min(n,(i+v1[i]+1))});
    }
    sort(v.begin(),v.end());
    ans=1;
    a=v[0].s;  r=a; 
    for(i=1;i<n;i++){
        if(v[i].f<=a){r=max(r,v[i].s);}
        else{
            if(v[i].f>r){return -1;}
            ans++;
            a=r;
        }
    }
    if(r<target){return -1;}
    return ans;
}

