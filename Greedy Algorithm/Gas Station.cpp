int Solution::canCompleteCircuit(const vector<int> &gas, const vector<int> &cost) {
    int n,a,b,ls,us,i;
        n=gas.size();
        int g[2*n+3],c[2*n+3];
        for(i=0;i<n;i++){g[i+1]=gas[i];c[i+1]=cost[i];}
        for(i=n+1;i<=2*n;i++){g[i]=g[i-n];c[i]=c[i-n];}
        us=0;ls=0;
        a=1;b=1;
        while(a<=n){
            if(us>=ls){
                us+=g[b];
                ls+=c[b];
                b++;
            }
            else{
                us-=g[a];
                ls-=c[a];
                a++;
            }
            if(b-a==n && us>=ls){return a-1;}
        }
        return -1;
}
