vector<int> Solution::intersect(const vector<int> &x, const vector<int> &y) {
    int n,m,a,b,i;
    vector<int>v;
    n=x.size(); m=y.size();
    a=0;    b=0;
    while(1){
        if(a==n || b==m){break;}
        if(x[a]==y[b]){v.push_back(x[a]);a++;b++;}
        else if(x[a]>y[b]){b++;}
        else{a++;}
    }
    return v;
}
