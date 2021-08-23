/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> >ans;
void fun(TreeNode* node,int sum,vector<int>v){
    if(node==NULL){return;}
    if(node->left==NULL && node->right==NULL){
        if(sum-node->val==0){
            v.push_back(node->val);
            ans.push_back(v);
        }
    }
    v.push_back(node->val);
    fun(node->left,sum-node->val,v);
    fun(node->right,sum-node->val,v);
}
vector<vector<int> > Solution::pathSum(TreeNode* root, int B) {
    vector<int>v;
    ans.clear();
    fun(root,B,v);
    return ans;
}
