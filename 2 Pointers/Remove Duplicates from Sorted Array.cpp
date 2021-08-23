int Solution::removeDuplicates(vector<int> &v) {
    int i,j,n=v.size();
    j=0;
    for(i=1;i<n;i++){
        if(v[i]==v[j]){;}
        else{
            j++;swap(v[j],v[i]);
        }
    }   
    return j+1;
}
