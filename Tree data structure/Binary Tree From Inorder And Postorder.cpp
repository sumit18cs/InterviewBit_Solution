/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int i;
int search(vector<int>&inorder,int s,int f,int se){
    for(int j=s;j<=f;j++){
        if(inorder[j]==se){return j;}
    }
    return -1;
}
TreeNode* fun(vector<int>&inorder,vector<int>&post,int s,int f){
    if(s>f){return NULL;}
    TreeNode* node=new TreeNode(post[i]);
    int p=search(inorder,s,f,post[i]);
    i--;
    node->right=fun(inorder,post,p+1,f);
    node->left=fun(inorder,post,s,p-1);
    return node;
}
TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &post) {
    i=post.size()-1;
    return fun(inorder,post,0,post.size()-1);
}
