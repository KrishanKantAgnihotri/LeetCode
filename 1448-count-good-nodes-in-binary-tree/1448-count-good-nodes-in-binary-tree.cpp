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
    int calc(TreeNode * root, int mx){
        if(root== NULL) return 0 ; 
        if(root->val>=mx) return 1+ calc(root->left,root->val)+calc(root->right,root->val);
        else 
            return calc(root->left,mx)+calc(root->right,mx);
    }
    int goodNodes(TreeNode* root) {
        return calc(root,INT_MIN);
    }
};