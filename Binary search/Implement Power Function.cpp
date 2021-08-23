#define ll long long int
ll mod;
ll power(ll a, ll b) 
{
    ll res = 1;
    while (b > 0) {
        if (b & 1){res = res * a;res=res%mod;}
        a = a * a;a=a%mod;
        b >>= 1;
    }
    return res;
}
int Solution::pow(int x, int n, int d) {
    ll a=0;
    if(x==0){return 0;}
    mod=d;
    ll ans=power(x,n);
    ans%=d;
    ans+=d;
    ans%=d;
    return ans;
}
