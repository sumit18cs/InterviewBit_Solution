int Solution::diffPossible(vector<int> &v, int x) {
    int i,j;
    i=0;j=1;
    while(1){
        if(j==v.size()){break;}
        if(v[j]-v[i]==x){return 1;}
        if(v[j]-v[i]>x){i++;}
        else{j++;}
        if(i>=j){j=i+1;}
    }
    return 0;
}
