string Solution::solve(string s) {
    int n=s.length(),i;
    queue<int>q;
    string ans;
    map<int,int>m;
    for(i=0;i<n;i++){
        m[s[i]]++;
        if(m[s[i]]==1){q.push(s[i]);}
        while(q.size()>0){
            if(m[q.front()]>1){q.pop();}
            else{break;}
        }
        if(q.size()>0){ans+=q.front();}
        else{ans+='#';}
    }
    return ans;
}
