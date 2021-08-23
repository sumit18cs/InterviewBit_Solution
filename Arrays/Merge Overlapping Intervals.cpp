/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::merge(vector<Interval> &interval) {
    int n,a,b,i;
    n=interval.size();
    vector<pair<int,int> >v;
    vector<Interval>ans;
    for(i=0;i<n;i++){
        v.push_back({interval[i].start,interval[i].end});
    }
    sort(v.begin(),v.end());
    if(n==0){return ans;}
    a=v[0].first;    b=v[0].second;
    for(i=1;i<n;i++){
        if(v[i].first>b){
            ans.push_back({a,b});
            a=v[i].first;    b=v[i].second;
        }
        else if(v[i].second<=b){;}
        else{
            b=max(b,v[i].second);
        }
    }
    ans.push_back({a,b});
    return ans;
}
