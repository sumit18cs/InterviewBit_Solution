int Solution::isPower(int n) {
    if(n==1){return 1;}
    long long int a=2,s;
    while(1){
        s=a*a;
        if(s==n){return 1;}
        if(s>n){break;}
        while(1){
            if(s>n){break;}
            if(s==n){return 1;}
            s=s*a;
        }
        a++;
    }
    return 0;
}
