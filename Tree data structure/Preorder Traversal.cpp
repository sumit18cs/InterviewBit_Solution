/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* root) {
    stack<TreeNode*>s;
    vector<int>ans;
    if(root==NULL){return ans;}
    s.push(root);
    while(s.size()>0){
        TreeNode* temp=s.top();
        ans.push_back(temp->val);
        s.pop();
        if(temp->right!=NULL){s.push(temp->right);}
        if(temp->left!=NULL){s.push(temp->left);}
    }    
    return ans;
}
