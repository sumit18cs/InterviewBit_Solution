/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode *first,*second,*last;
void inorder(TreeNode* node){
    if(node==NULL){return;}
    inorder(node->left);
    if(first==NULL && last->val>node->val){first=last;}
    if(last->val>node->val){second=node;}
    last=node;
    inorder(node->right);
}
vector<int> Solution::recoverTree(TreeNode* root) {
    first=NULL; second=NULL;    last=new TreeNode(-100);
    inorder(root);
    vector<int>ans;
    ans.push_back(first->val);
    ans.push_back(second->val);
    sort(ans.begin(),ans.end());
    return ans;
}
