int Solution::romanToInt(string s) {
    int ch[30];
        ch['I'-'A']=1;
        ch['V'-'A']=5;
        ch['X'-'A']=10;
        ch['L'-'A']=50;
        ch['C'-'A']=100;
        ch['D'-'A']=500;
        ch['M'-'A']=1000;
        
        // for(int i=0;i<26;i++){cout<<ch[i]<<" ";}cout<<"\n";
        int n=s.size();
        int res=0;
        for(int i=0; i<n; i++)
        {
            int S1=ch[s[i]-'A'];
            // cout<<s[i]<<" "<<S1<<"\n";
            if(i+1<n)
            {
                int S2=ch[s[i+1]-'A'];
                if(S1>=S2)
                {
                    res=res+S1;
                }
                else
                {
                    res=res+S2-S1;
                    i++;
                }
            }
            else
            {
                res=res+S1;
            }
        }
        return res;
}
