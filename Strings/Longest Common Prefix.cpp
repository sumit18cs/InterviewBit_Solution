string Solution::longestCommonPrefix(vector<string> &v) {
    string ans,s;
    int i,j;
    if(v.size()==1){return v[0];}
    for(i=0;i<min(v[0].length(),v[1].length());i++){
        if(v[0][i]==v[1][i]){ans+=v[0][i];}
        else{break;}
    }
    for(i=2;i<v.size();i++){
        s="";
        for(j=0;j<min(ans.length(),v[i].length());j++){
            if(v[i][j]==ans[j]){s+=ans[j];}
            else{break;}
        }
        ans=s;
    }
    return ans;
}
