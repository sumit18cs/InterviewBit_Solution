

    void Solution::rotate(vector<vector<int> > &v) {
        int n=v.size();
        int i,j; 
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){swap(v[i][j],v[j][i]);}
        }
        for(i=0;i<n;i++){
            reverse(v[i].begin(),v[i].end());
        }
    }



    void Solution::rotate(vector<vector<int> > &v) {
        int n=v.size();
        int i,j,a,b,c,d,p,q;
        a=0;b=n-1;  c=0;d=n-1;
        q=n-1;
        while(1){
            if(a>=b || c>=d){break;}
            for(p=1;p<=q;p++){
                for(i=a;i<b;i++){
                    swap(v[i][c],v[i+1][c]);
                }
                for(i=c;i<d;i++){
                    swap(v[b][i],v[b][i+1]);
                }
                for(i=b;i>a;i--){
                    swap(v[i][d],v[i-1][d]);
                }
                for(i=d;i>c+1;i--){
                    swap(v[a][i],v[a][i-1]);
                }
            }
            q=q-2;
            a++;b--;c++;d--;
        }
    }
