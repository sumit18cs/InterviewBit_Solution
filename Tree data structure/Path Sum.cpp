/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int p;
void fun(TreeNode* node,int sum){
    if(node==NULL){return;}
    sum-=node->val;
    if(sum==0 && node->left==NULL && node->right==NULL){p=1;return;}
    fun(node->left,sum);
    fun(node->right,sum);
}
int Solution::hasPathSum(TreeNode* root, int B) {
    p=0;
    fun(root,B);
    if(p==1){return true;}
    return false;
}
