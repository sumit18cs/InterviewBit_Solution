int fun(int a,int b){
    if(a%b==0){return b;}
    return fun(b,a%b);
}
int Solution::gcd(int A, int B) {
    if(A==0){return B;}
    if(B==0){return A;}
    return fun(max(A,B),min(A,B));
}
