#include<bitset>
int Solution::solve(int n) {
    int i,a=0;
    string s=bitset<32>(n).to_string();
    for(i=31;i>=0;i--){
        if(s[i]=='0'){a++;}
        else{break;}
    }
    return a;
}
