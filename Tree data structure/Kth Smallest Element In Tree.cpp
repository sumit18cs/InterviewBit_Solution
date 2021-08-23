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
void inorder(TreeNode* node){
    if(node==NULL){return;}
    inorder(node->left);
    v.push_back(node->val);
    inorder(node->right);
}
int Solution::kthsmallest(TreeNode* root, int B) {
    v.clear();
    inorder(root);
    return v[B-1];
}
