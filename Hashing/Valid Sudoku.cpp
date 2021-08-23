#define s second
int Solution::isValidSudoku(const vector<string> &A) {
    int n=9,i,j,x[10][10];
    map<int,int>m,m1,m2;
    m.clear();  m1.clear(); m2.clear();
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(A[i-1][j-1]=='.'){x[i][j]=0;}
            else{x[i][j]=A[i-1][j-1]-'0';}
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(x[i][j]!=0){m[x[i][j]]++;}
            if(x[j][i]!=0){m1[x[j][i]]++;}
        }
        for(auto j:m){if(j.s>1){return 0;}}
        for(auto j:m1){if(j.s>1){return 0;}}
        m.clear();  m1.clear();
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            if(x[i][j]!=0){m[x[i][j]]++;}
        }
        for(j=4;j<=6;j++){
            if(x[i][j]!=0){m1[x[i][j]]++;}
        }
        for(j=7;j<=9;j++){
            if(x[i][j]!=0){m2[x[i][j]]++;}
        }
        if(i%3==0){
            for(auto j:m){if(j.s>1){return 0;}}
            for(auto j:m1){if(j.s>1){return 0;}}
            for(auto j:m2){if(j.s>1){return 0;}}
            m.clear();  m1.clear(); m2.clear();
        }
    }
    return 1;
}
