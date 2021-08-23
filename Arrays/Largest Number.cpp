bool compare(string s1,string s2){
    return s1+s2>s2+s1;
}
string Solution::largestNumber(const vector<int> &v) {
    vector<string>s;
    string s1;
    int n=v.size();
    int i,a,b,j;
    a=0;
    for(i=0;i<v.size();i++){
        if(v[i]==0){a++;}
    }
    if(a==n){s1+=0+'0';return s1;}
    for(i=0;i<n;i++){s.push_back(to_string(v[i]));}
    sort(s.begin(),s.end(),compare);
    for(i=0;i<n;i++){s1+=s[i];}
    return s1;
}
