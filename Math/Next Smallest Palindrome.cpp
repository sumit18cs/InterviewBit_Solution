string Solution::solve(string s) {
    int n,i,a,b,j;
    n=s.length();
    string s1=s;
    for(i=0;i<n/2;i++){
        s1[n-i-1]=s1[i];
    }
    if(s1>s){return s1;}
    if(n==1){
        if(s[0]=='9'){s="11";}
        else{s=s[0]-'0'+1+'0';}
        return s;
    }
    a=n/2;
    if(n%2==1){a++;}
    for(i=a-1;i>=0;i--){
        b=s[i]-'0';
        if(b!=9){
            s[i]=b+1+'0';
            for(j=i+1;j<a;j++){s[j]='0';}
            break;
        }
    }
    if(i<0){
        s='1';
        for(i=0;i<n-1;i++){s+='0';}
        s+='1';
        return s;
    }
    for(i=0;i<n/2;i++){
        s[n-i-1]=s[i];
    }
    return s;
}
