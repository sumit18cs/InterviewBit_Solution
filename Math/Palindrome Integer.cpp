int Solution::isPalindrome(int n) {
    string s1,s=to_string(n);
    s1=s;
    reverse(s1.begin(),s1.end());
    if(s1==s){return true;}
    else{return false;}
}
