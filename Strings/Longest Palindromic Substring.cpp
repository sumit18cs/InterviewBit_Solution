string Solution::longestPalindrome(string s) {
    int n=s.length(),i,j,a,b,ans=1;
    for(i=0;i<n;i++){
        a=i-1;b=i+1;
        while(a>=0 && b<=n-1){
            if(s[a]==s[b]){ans=max(ans,b-a+1); a--;b++;}
            else{break;}
        }
    }
    for(i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            ans=max(ans,2);
            a=i-1;  b=i+2;
            while(a>=0 && b<=n-1){
                if(s[a]==s[b]){ans=max(ans,b-a+1);  a--;b++;}
                else{break;}
            }
        }
    }
    // cout<<ans<<" ";
    string ss="";
    for(i=0;i<n;i++){
        a=i;    b=i+ans-1;
        while(a<b){
            if(s[a]==s[b]){a++;b--;}
            else{break;}
        }
        if(a>=b){break;}
    }
    for(j=i;j<=i+ans-1;j++){ss+=s[j];}
    return ss;
}
