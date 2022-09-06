/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
int transform(TreeNode* root){
    if(root==NULL) return 0 ;
    int val1 = transform(root->left);
    if(!val1) root->left  = NULL;
    int val2 = transform(root->right);
    if(!val2) root->right = NULL;
    return (val1||val2||(root->val==1));
}
class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(!transform(root)&&(root->val!=1)) root = NULL;    
        return root ;
    }
};