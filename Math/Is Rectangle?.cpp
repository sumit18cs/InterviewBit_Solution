int Solution::solve(int A, int B, int C, int D) {
    int x[4];
    x[0]=A;x[1]=B;x[2]=C,x[3]=D;
    sort(x,x+4);
    if(x[0]==x[1] && x[2]==x[3]){return 1;}
    else{return 0;}
}
