bool x[30000000];
void prime(int n) 
{
    bool v[n+1];
    memset(v,true,sizeof(v));
    for (int i = 2; i * i <= n; i++) {
        if (v[i]==true) 
        {
            for (int j = i * i; j <= n; j += i){v[j] = false;}
        }
    }
    for(int i=2;i<=n;i++) {
        if(v[i]==true){x[i]=true;}
    }
}
vector<int> Solution::primesum(int a) {
    memset(x,false,sizeof(x));
    prime(a);
    int i;
    vector<int>v;
    for(i=2;i<=a;i++){
        if(x[i]==true && x[a-i]==true){v.push_back(i);v.push_back(a-i);return v;}
    }
}
