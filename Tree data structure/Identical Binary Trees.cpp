/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool check(TreeNode* a,TreeNode* b){
    if(a==NULL && b==NULL){return 1;}
    if(a==NULL){return 0;}
    if(b==NULL){return 0;}
    if(a->val!=b->val){return 0;}
    return check(a->left,b->left)&&check(a->right,b->right);
}
int Solution::isSameTree(TreeNode* a, TreeNode* b) {
    if(check(a,b)==1){return 1;}
    return 0;
}
