/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* root) {
    if(root==NULL){return 1e9;}
    if(root->left==NULL && root->right==NULL){return 1;}
    return min(minDepth(root->left),minDepth(root->right))+1;
}
