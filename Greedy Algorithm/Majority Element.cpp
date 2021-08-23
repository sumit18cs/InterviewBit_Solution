#define f first
#define s second
int Solution::majorityElement(const vector<int> &v) {
    int i,n=v.size(),a;
    map<int,int>m;
    for(i=0;i<n;i++){m[v[i]]++;}
    a=n/2+1;
    for(auto i:m){
        if(i.s>=a){return i.f;}
    }
}
