int Solution::evalRPN(vector<string> &v) {
    int ans=0,i,a,b,j;
    stack<int>st;
    for(i=0;i<v.size();i++){
        string s=v[i];
        if(s.length()>1 && s[0]=='-'){
            a=0;
            for(j=1;j<s.length();j++){
                a=a*10+(s[j]-'0');
            }
            st.push((-1)*a);
        }
        else if(s[0]-'0'>=1 && s[0]-'0'<=9){
            a=0;
            for(j=0;j<s.length();j++){
                a=a*10+(s[j]-'0');
            }
            st.push(a);
        }
        else{
            a=st.top();  st.pop();
            b=st.top();  st.pop();
            if(s=="+"){st.push(a+b);}
            else if(s=="-"){st.push(b-a);}
            else if(s=="*"){st.push(a*b);}
            else{st.push(b/a);}
        }
    }
    return st.top();
}
