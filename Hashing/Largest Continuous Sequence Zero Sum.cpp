vector<int> Solution::lszero(vector<int> &v) {
    int a,b,c,i,n=v.size();
    map<int,int>m1;
    vector<int>ans;
    a=0;
    b=0;
    for(i=0;i<n;i++){
        a+=v[i];
        if(a==0){b=max(b,i+1);continue;}
        if(m1[a]>0){
            b=max(b,i+1-m1[a]);
        }
        else{
            m1[a]=i+1;
        }
    }
    if(b==0){return ans;}
    a=0;
    for(i=0;i<b;i++){a+=v[i];}
    c=b;    b=0;
    while(1){
        if(a==0){
            for(i=b;i<c;i++){ans.push_back(v[i]);}
            return ans;
        }
        else{
            if(c==n){break;}
            a=a-v[b]+v[c];
            b++;    c++;
        }
    }
}
