int Solution::solve(string s) {
    int n=s.length(),l,r,a,b;
    l=0;r=n-1;
    while(l<r){
        if(s[l]==s[r]){l++;r--;}
        else{break;}
    }
    if(l>=r){return 1;}
    a=l+1;b=r;
    while(a<b){
        if(s[a]==s[b]){a++;b--;}
        else{break;}
    }
    if(a>=b){return 1;}
    a=l;b=r-1;
    while(a<b){
        if(s[a]==s[b]){a++;b--;}
        else{break;}
    }
    if(a>=b){return 1;}
    return 0;
}
