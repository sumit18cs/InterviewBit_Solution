int Solution::solve(string s) {
    int i,a=0;
    map<int,int>m;
    for(i=0;i<s.length();i++){m[s[i]-'a']++;}
    for(auto i:m){
        if(i.second%2!=0){a++;}
    }
    if(a>1){return 0;}
    else{return 1;}
}
