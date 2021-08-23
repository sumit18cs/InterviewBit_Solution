int Solution::braces(string ss) {
    int i;  bool ans;
    stack<char>s;
    for(i=0;i<ss.length();i++){
        if(ss[i]==')'){
            char a=s.top();
            s.pop();
            ans=true;
            while(s.size()>0 && a!='('){
                if(a=='+' || a=='-' || a=='*' || a=='/'){ans=false;}
                a=s.top();  s.pop();
            }
            if(ans==true){return 1;}
        }
        else{s.push(ss[i]);}
    }
    return 0;
}
