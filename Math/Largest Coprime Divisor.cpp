int Solution::cpFact(int a, int b) {
    while(__gcd(a,b)!=1){
        a=a/(__gcd(a,b));
    }
    return a;
}
