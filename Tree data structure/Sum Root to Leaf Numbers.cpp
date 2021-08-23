/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans,a,mod=1003;
void fun(TreeNode* node,int sum){
    if(node==NULL){return;}
    sum=10*sum+node->val;
    sum%=mod;
    if(node->left==NULL && node->right==NULL){
        ans+=sum;   ans%=mod;
    }
    fun(node->left,sum);
    fun(node->right,sum);
}
int Solution::sumNumbers(TreeNode* root) {
    ans=0;
    fun(root,0);
    return ans;
}
