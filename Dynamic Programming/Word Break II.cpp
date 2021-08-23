#define pb push_back

struct node{
        int val;
        node* child[26];
    };
    node* create(){
        node * temp=new node();
        temp->val=0; 
        for(int i=0;i<20;i++){temp->child[i]=NULL;}
        return temp;
    }
    void add(node* root,string s){
        node* temp=root;
        int i;
        for(i=0;i<s.length();i++){
            if(temp->child[s[i]-'a']==NULL){
                temp->child[s[i]-'a']=create();
            }
            temp=temp->child[s[i]-'a'];
        }
        temp->val++;
    }
    vector<string>ans;
    string s;
    void fun(node* root,int i,string ss){
        if(i==s.length()){
            ss.pop_back();
            ans.pb(ss);
            return;
        }
        if(root->child[s[i]-'a']==NULL){return;}
        int j=i;
        node* temp=root;
        string current;
        while(j<s.length() && temp->child[s[j]-'a']!=NULL){
            current+=s[j];
            temp=temp->child[s[j]-'a'];      j++;
            if(temp->val>0){
                current+=" ";
                fun(root,j,ss+current);
                current.pop_back();
            }
        }
    }
vector<string> Solution::wordBreak(string A, vector<string> &dic) {
    int i;  s=A;
    ans.clear();
        node* root=new node();
        for(i=0;i<dic.size();i++){add(root,dic[i]);}
        fun(root,0,"");
        return ans;
}
