vector < int > z_function(string s)
{
    int i,n,l,r;
    n=s.length();
    vector < int > z(n);
    for(i=1,l=0,r=0;i < n;++i)
    {
        if(i <= r){
            z[i]=min(r-i+1,z[i-l]);
        }
        while(i + z[i] < n && s[z[i]] == s[i + z[i]]){++z[i];}
        if(i+z[i]-1 > r){
            l=i;r=i+z[i]-1;
        }
    }
    return z;
}
int Solution::strStr(const string s1, const string s2) {
    int i;
    string s;
    // s2 khojna hai s1 main
    if(s1.size()==0 || s2.size()==0){return -1;}
    s=s2+s1;
    // cout<<s<<"\n";
    // cout<<s1.length()<<" "<<s2.length()<<"\n";
    vector<int>v=z_function(s);
    // for(i=0;i<v.size();i++){cout<<v[i]<<" ";}
    for(i=s2.length();i<s2.length()+s1.length();i++){
        if(v[i]>=s2.length()){return i-s2.length();}
    }
    return -1;
}
