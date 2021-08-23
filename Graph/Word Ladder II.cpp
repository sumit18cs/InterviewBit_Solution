#define pb push_back
vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) {
    int i,a,flag;
    string s;
    vector<string>ss;
    vector<vector<string> >ans;
    if(start==end){ss.pb(start);ans.pb(ss); return ans;}
    map<string,int>m;
    queue<vector<string> >q;
    for(i=0;i<dict.size();i++){m[dict[i]]=1;}
    q.push({start});
    unordered_set<string> made;
    while(q.size()>0){
        a=q.size();
        flag=0;
        unordered_set<string> made_temp;
        while(a--){
            vector<string>p=q.front();
            q.pop();
            s=p.back();
            for(i=0;i<s.size();i++){
                for(char j='a';j<='z';j++){
                    char ch=s[i];
                    s[i]=j;
                    if(m.find(s)!=m.end() && made.find(s)==made.end()){
                        p.pb(s);
                        if(s==end){ans.pb(p); flag=1;}
                        else{q.push(p);}
                        made_temp.insert(s);
                        p.pop_back();
                    }
                    s[i]=ch;
                }
            }
        }
        if(flag==1){break;}
        for(auto it:made_temp){made.insert(it);}
    }
    return ans;
}
