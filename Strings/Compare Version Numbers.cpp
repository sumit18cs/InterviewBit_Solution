int Solution::compareVersion(string s1, string s2) {
    unsigned long long int n1 = s1.size(),n2 = s2.size(),i=0, j=0,a,b;

    while(i<n1 || j<n2)
    {
        a = 0,b = 0;
        while(i<n1 && s1[i]!='.')             
        {
            a = a*10 + s1[i]-'0';
            i++;
        }
        while(j<n2 && s2[j]!='.')
        {
            b = b*10 + s2[j]-'0';
            j++;
        }
        
        if(a > b){
            return 1;
        }          
        else if(a< b){
            return -1;
        }
        i++;
        j++;
    }
    return 0;   
}
