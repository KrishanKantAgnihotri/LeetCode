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
    int ans = INT_MAX;
    int minDepth(TreeNode* root,int cur = 1) {
        if(root == NULL){
            return 0 ; 
        }
        if(root->left== NULL && root->right == NULL){
            ans = min(ans,cur);
            return ans;
        }
        minDepth(root->left,cur+1);
        minDepth(root->right,cur+1);
        return ans;
    }
};