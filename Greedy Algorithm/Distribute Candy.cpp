int Solution::candy(vector<int> &v) {
    int n=v.size(),i,j,a,ans=0;
    set<pair<int,int> >s;
    int y[n+3],x[n+3];
    y[0]=-1e9;y[n+1]=-1e9;
    for(i=0;i<n;i++){
        s.insert({v[i],i+1});
        y[i+1]=v[i];
    }
    for(i=0;i<=n+1;i++){x[i]=0;}
    for(i=0;i<n;i++){
        j=(*s.begin()).second;
        a=(*s.begin()).first;
        // cout<<j<<" ";
        if(x[j+1]==0 && x[j-1]==0){x[j]=1;}
        else if(y[j-1]==y[j+1] && y[j]==y[j-1]){x[j]=1;}
        else if(x[j+1]==0 && y[j]==y[j-1]){
            x[j]=1;
        }
        else if(y[j-1]==y[j]){x[j]=x[j+1]+1;}
        else{x[j]=max(x[j-1],x[j+1])+1;}
        s.erase(s.begin());
    }
    for(i=1;i<=n;i++){ans+=x[i];cout<<x[i]<<" ";}
    return ans;
}
