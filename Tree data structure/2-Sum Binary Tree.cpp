/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::t2Sum(TreeNode* root, int k) {
    stack<TreeNode*>sl;
    stack<TreeNode*>sr;
    TreeNode* temp=root;
    while(temp!=NULL){
        sl.push(temp);
        temp=temp->left;
    }
    temp=root;
    while(temp!=NULL){
        sr.push(temp);
        temp=temp->right;
    }
    while(sl.size()>0 && sr.size()>0){
        if(sl.top()->val+sr.top()->val==k && sl.top()->val!=sr.top()->val){return 1;}
        if(sl.top()->val+sr.top()->val>k){
            temp=sr.top();
            sr.pop();
            temp=temp->left;
            while(temp!=NULL){
                sr.push(temp);
                temp=temp->right;
            }
        }
        else{
            temp=sl.top();
            sl.pop();
            temp=temp->right;
            while(temp!=NULL){
                sl.push(temp);
                temp=temp->left;
            }
        }
    }
    return 0;
}
