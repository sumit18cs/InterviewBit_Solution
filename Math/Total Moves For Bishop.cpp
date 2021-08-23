int Solution::solve(int a, int b) {
    int i,j,ans;
    i=a;j=b;
    ans=0;
    while(1){
        i--;j--;
        if(i>=1 && j>=1){ans++;}
        else{break;}
    }
    i=a;j=b;
    while(1){
        i--;j++;
        if(i>=1 && j<=8){ans++;}
        else{break;}
    }
    i=a;j=b;
    while(1){
        i++;j--;
        if(i<=8 && j>=1){ans++;}
        else{break;}
    }
    i=a;j=b;
    while(1){
        i++;j++;
        if(i<=8 && j<=8){ans++;}
        else{break;}
    }
    return ans;
}
