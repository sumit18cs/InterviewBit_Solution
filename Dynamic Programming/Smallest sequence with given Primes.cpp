vector<int> Solution::solve(int a, int b, int c, int n) {
    set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    int p;
    vector<int>v;
    while(n>0){
        p=*s.begin();
        s.erase(p);
        v.push_back(p); n--;
        s.insert(p*a);  s.insert(p*b);  s.insert(p*c);
    }
    return v;
}
