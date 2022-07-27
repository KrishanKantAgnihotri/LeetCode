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
class Solution {
public:
    void flat(TreeNode* root){
        if(root == NULL ) return ;
        if(root->left == NULL &&  root->right == NULL){
            return ;
        }
        flat(root->left);
        TreeNode* tmp = root->right;
        root->right = root->left;
        root->left = NULL;
        while(root->right!=NULL){
            root = root->right;
        }
        root->right = tmp;
        flat(root->right);
    }
    void flatten(TreeNode* root) {
        flat(root);
        
    }
};