int Solution::solve(int a, int b, int c) {
    a=a+c-1;
    a%=b;
    if(a==0){a=b;}
    return a;
}
