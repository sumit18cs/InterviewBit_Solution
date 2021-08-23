int Solution::removeElement(vector<int> &v, int x) {
    int i,j,n=v.size();
    j=0;
    for(i=0;i<n;i++){
        if(v[i]!=x){
            swap(v[j],v[i]);
            j++;
        }
    }
    return j;
}
