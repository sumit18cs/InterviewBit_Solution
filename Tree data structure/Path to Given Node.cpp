/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int>v;
bool check(TreeNode* root,int a){
    if(root==NULL){return false;}
    if(root->val==a || check(root->left,a) || check(root->right,a)){
        v.push_back(root->val);
        return true;
    }
    return false;
}
vector<int> Solution::solve(TreeNode* root, int a) {
    v.clear();
    check(root,a);
    reverse(v.begin(),v.end());
    return v;
}
