int Solution::solve(string s) {
    int i,a=0;
    for(i=0;i<s.length();i++){
        if(s[i]=='('){a++;}
        else{a--;}
        if(a<0){return 0;}
    }
    if(a==0){return 1;}
    else{return 0;}
}
