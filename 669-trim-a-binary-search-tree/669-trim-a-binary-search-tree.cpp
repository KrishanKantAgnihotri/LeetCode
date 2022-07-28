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
    TreeNode* transform(TreeNode* root ,int low ,int high){
        if(root ==NULL) return root;
        root->left = transform(root->left,low,high);
        root->right = transform(root->right,low,high);
        if(root->val<low){
            root = root->right;
            return root;
        }
        if(root->val>high){
            root = root->left;
            return root;
        }
 //       cout<<root->val;
        return root;
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        return transform(root,low,high);
    }
};