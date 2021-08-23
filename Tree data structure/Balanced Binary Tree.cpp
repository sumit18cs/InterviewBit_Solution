/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans=0;
int height(TreeNode* node){
    if(node==NULL){return 0;}
    int l,r;
    l=height(node->left);
    r=height(node->right);
    if(abs(l-r)>1){ans=0;}
    return 1+max(l,r);
}
int Solution::isBalanced(TreeNode* A) {
    ans=1;
    height(A);
    return ans;
}
