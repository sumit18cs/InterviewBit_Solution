int Solution::fibsum(int n) {
    int i,x[100005],ans=0,j;
    x[1]=1; x[2]=1;
    for(i=3;;i++){
        x[i]=x[i-1]+x[i-2];
        if(x[i]>n){break;}
    }
    for(j=i;j>=1;j--){
        if(x[j]>n){;}
        else{
            n=n-x[j];
            ans++;
            j++;
        }
    }
    return ans;
}
