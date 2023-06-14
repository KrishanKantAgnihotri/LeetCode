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
 const int INF = 1e8 ; 
    int helper(TreeNode* root,TreeNode* &prev){
        if(root==NULL){
            return INF;
        }
        int cur  = helper(root->left,prev);
        if(prev!=NULL) cur = min(cur,abs(prev->val-root->val));
        prev = root;
        cur = min(cur,helper(root->right,prev));
        return cur; 
    }
    int getMinimumDifference(TreeNode* root) {
        TreeNode* prev = NULL;
        int ans = helper(root,prev);
        return ans;
    }
};