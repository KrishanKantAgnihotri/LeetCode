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
    int longest = 0;
    int longestZigZag(TreeNode* root) {
        dfs(root->left, 1, false);
        dfs(root->right, 1, true);
        return longest;
    }
private:
    void dfs(TreeNode* root, int length, bool fromRight) {
        if (root) {
            longest = max(longest, length);
            if (fromRight) {
                dfs(root->left, length + 1, false);
                dfs(root->right, 1, true);
            } else  {
                dfs(root->right, length + 1, true);
                dfs(root->left, 1, false);
            }
        }
    }
};