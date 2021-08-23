/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int i=0;
    int search(vector<int>&inorder,int s,int f,int se){
        for(int j=s;j<=f;j++){
            if(inorder[j]==se){return j;}
        }
        return -1;
    }
    TreeNode* fun(vector<int>&pre,vector<int>&inorder,int s,int f){
        if(s>f){return NULL;}
        TreeNode* node = new TreeNode(pre[i]);
        i++;
        int p=search(inorder,s,f,pre[i-1]);
        node->left=fun(pre,inorder,s,p-1);
        node->right=fun(pre,inorder,p+1,f);
        return node;
    }
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &inorder) {
    i=0;
    return fun(pre,inorder,0,pre.size()-1);
}
