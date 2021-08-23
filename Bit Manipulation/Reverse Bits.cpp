#include<bitset>
unsigned int Solution::reverse(unsigned int A) {
    string s1,s=bitset<32>(A).to_string();
    int ans=0,i,  p=1;
    for(i=0;i<32;i++){
        ans+=(s[i]-'0')*p;
        p=p*2;
    }
    return ans;
}
