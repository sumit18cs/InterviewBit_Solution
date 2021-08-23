void Solution::setZeroes(vector<vector<int> > &v) {
    int n,m,i,j;
    n=v.size();
    m=v[0].size();
    int row[n+3],column[m+3];
    for(i=0;i<n;i++){row[i]=0;}
    for(i=0;i<m;i++){column[i]=0;}
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(v[i][j]==0){row[i]=1;column[j]=1;}
        }
    }
    for(i=0;i<n;i++){
        if(row[i]==0){continue;}
        for(j=0;j<m;j++){v[i][j]=0;}
    }
    for(i=0;i<m;i++){
        if(column[i]==0){continue;}
        for(j=0;j<n;j++){v[j][i]=0;}
    }
}
