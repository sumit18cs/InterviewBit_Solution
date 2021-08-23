string Solution::convert(string s, int k) {
    int n = s.length();
    int a = 0, b = 1;
	if(k == 1) return s;
	vector<string> ans(k);
	for(int i=0; i<n; i++){
		ans[a]+= s[i];
		a+=b;
		if(a == 0 || a == k-1){ b*= -1;}
	}
	for(int i=1; i<ans.size(); i++) ans[0]+= ans[i];
	return ans[0];
}
