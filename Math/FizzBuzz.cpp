#define pb push_back
vector<string> Solution::fizzBuzz(int n) {
    int i;
    string s;
    vector<string>v;
    for(i=1;i<=n;i++){
        if(i%15==0){v.pb("FizzBuzz");}
        else if(i%3==0){v.pb("Fizz");}
        else if(i%5==0){v.pb("Buzz");}
        else{
            v.pb(to_string(i));
        }
    }
    return v;
}
