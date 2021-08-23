string Solution::solve(string s) {
    int n,a,b,j,i,p;
    int x[10]={0};
    n=s.length();
    a=s[n-1]-'0';
    x[a]=1;
    for(i=n-2;i>=0;i--){
        b=s[i]-'0';
        if(b>=a){x[b]++;a=b;}
        else{x[b]++; p=b;break;}
    }
    if(i<0){s="-1"; return s;}
    for(j=b+1;j<=9;j++){if(x[j]>0){s[i]=j+'0';x[j]--;break;}}
    i++;
    for(j=0;j<=9;j++){
        while(x[j]>0){
            s[i]=j+'0'; i++;    x[j]--;
        }
    }
    return s;
}
