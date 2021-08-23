#define pb push_back
vector<int> Solution::stepnum(int A, int B) {
    int i,a,b,c;
    vector<int>v;
    if(A==0){v.pb(0);}
    for(i=1;i<=9;i++){
        queue<int>q;
        q.push(i);
        while(q.size()>0){
            a=q.size();
            if(q.front()>B){break;}
            while(a--){
                int p=q.front();
                if(p>=A && p<=B){v.pb(p);}
                q.pop();
                c=p%10;
                if(c==0){q.push(p*10+1);}
                else if(c==9){q.push(p*10+8);}
                else{q.push(p*10+c-1);  q.push(p*10+c+1);}
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}
