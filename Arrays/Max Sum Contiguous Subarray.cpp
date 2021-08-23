int Solution::maxSubArray(const vector<int> &v) {
    int maxi=-1e8,max_end_here=0,i;
    for(i=0;i<v.size();i++){
        max_end_here+=v[i];
        maxi=max(maxi,max_end_here);
        if(max_end_here<=0){max_end_here=0;}
    }
    return maxi;
}
