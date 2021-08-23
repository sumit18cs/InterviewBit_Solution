int n,m,x[12][12],a=0,p=0;
bool check(int i,int j,int k){
    int s,a,b;
    for(s=1;s<=9;s++){if(x[i][s]==k){return false;}}
    for(s=1;s<=9;s++){if(x[s][j]==k){return false;}}
    a=(i-1)/3;
    if(a==0){a=1;}else if(a==1){a=4;}else{a=7;}
    b=(j-1)/3;
    if(b==0){b=1;}else if(b==1){b=4;}else{b=7;}
    for(s=1;s<=3;s++){
        if(x[a][b]==k){return false;}
        b++;
    }
    b=b-3;
    a++;
    for(s=1;s<=3;s++){
        if(x[a][b]==k){return false;}
        b++;
    }
    b=b-3;
    a++;
    for(s=1;s<=3;s++){
        if(x[a][b]==k){return false;}
        b++;
    }
    return true;
}
bool fun(){
    int i,j,k;
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(x[i][j]==0){
                for(k=1;k<=9;k++){
                    if(check(i,j,k)==true){
                        x[i][j]=k;
                        if(fun()){return true;}
                        else{x[i][j]=0;}
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void Solution::solveSudoku(vector<vector<char> > &board) {
    n=9;m=9;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(board[i-1][j-1]=='.'){x[i][j]=0;a++;}
            else{x[i][j]=board[i-1][j-1]-'0';}
        }
    }
    fun();
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            board[i-1][j-1]=x[i][j]+'0';
        }
    }
}
