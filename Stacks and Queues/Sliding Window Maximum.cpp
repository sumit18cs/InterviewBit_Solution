vector<int> Solution::slidingMaximum(const vector<int> &v, int k) {
    deque<int>d;
    int n=v.size(),i;
    vector<int>v1;
    for(i=0;i<n;i++){
        while(d.size()>0 && v[d.back()]<v[i]){
            d.pop_back();
        }
        d.push_back(i);
        if(i>=k-1){v1.push_back(v[d.front()]);}
        if(d.front()==i-k+1){d.pop_front();}
    }
    return v1;
}
