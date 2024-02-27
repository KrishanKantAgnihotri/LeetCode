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
public: int ans = INT_MIN;
    int calc(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int valx = calc(root->left);
        int valy = calc(root->right);
        ans = max(ans,valx+valy);
        return 1+max(valx,valy);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        calc(root);
        int fans = ans;
        ans = INT_MIN;
        return fans;
    }
};