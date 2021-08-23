int Solution::removeDuplicates(vector<int> &v) {
    int n=v.size(),i,j,c;
    j=0;
    c=1;
    for(i=1;i<n;i++){
        if(v[i]==v[j]){
            if(c==1){j++;swap(v[j],v[i]);c++;}
        }    
        else{
            j++;swap(v[j],v[i]);c=1;
        }
    }
    return j+1;
}
