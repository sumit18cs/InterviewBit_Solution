/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* root) {
    vector<int>ans;
    stack<TreeNode*>s;
    TreeNode *temp=root;
    while(temp!=NULL || s.size()!=0){
        while(temp!=NULL){
            s.push(temp);
            temp=temp->left;
        }
        temp=s.top();
        s.pop();
        ans.push_back(temp->val);
        temp=temp->right;
    }
    return ans;
}
