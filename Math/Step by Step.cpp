int Solution::solve(int n) {
    int i,s;
    if(n<0){n=(-1)*n;}
    if(n==0){return 0;}
    if(n==1){return 1;}
    if(n==2){return 3;}
    i=1;    s=0;
    while(1){
        s+=i;
        if(s==n){return i;}
        if(s>n){break;}
        i++;
    }
    s=s-n;
    if(s%2==0){return i;}
    else{
        s+=i+1;
        if(s%2==0){return i+1;}
        else{return i+2;}
    }
}
