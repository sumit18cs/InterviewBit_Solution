/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* fun(TreeNode* a,TreeNode* b){
    if(a==NULL){return b;}
    if(b==NULL){return a;}
    a->val+=b->val;
    a->left=fun(a->left,b->left);
    a->right=fun(a->right,b->right);
    return a;
}
TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    return fun(A,B);
}
