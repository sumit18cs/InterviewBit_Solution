string Solution::solve(string s) {
    string ans,s1;
    int c=0,i;
    for(i=s.length()-1;i>=0;i--){
        if(s[i]!=' '){s1+=s[i];}
        else{
            if(s1.size()>0){
                reverse(s1.begin(),s1.end());
                if(c==0){ans+=s1;c=1;}
                else{ans+=' ';ans+=s1;}
            }
            s1="";
        }
    }
    if(s1.size()>0){
        reverse(s1.begin(),s1.end());
        if(c==0){ans+=s1;c=1;}
        else{ans+=' ';ans+=s1;}
    }
    return ans;
}
