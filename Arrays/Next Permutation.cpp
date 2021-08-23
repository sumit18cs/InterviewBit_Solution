vector<int> Solution::nextPermutation(vector<int> &v) {
    int i,n,p=1;
    n=v.size();
    int a,b,j;
    for(i=n-2;i>=0;i--){
        if(v[i+1]>v[i]){
            for(j=n-1;j>i;j--){
                if(v[j]>v[i]){break;}
            }
            swap(v[i],v[j]);
            a=i+1;b=n-1;
            while(1){
                if(a>=b){break;}
                swap(v[a],v[b]);
                a++;b--;
            }
            return v;
        }
    }
    for(i=0;i<n/2;i++){swap(v[i],v[n-i-1]);}
    return v;
}
