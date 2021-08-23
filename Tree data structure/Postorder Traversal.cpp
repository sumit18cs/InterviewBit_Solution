/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* root) {
    stack<TreeNode*>s;
    TreeNode* temp;
    vector<int>ans;
    s.push(root);
    while(s.size()>0){
        temp=s.top();
        s.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL){s.push(temp->left);}
        if(temp->right!=NULL){s.push(temp->right);}
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
