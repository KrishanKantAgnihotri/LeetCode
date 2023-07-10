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
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0  ; 
        queue<pair<TreeNode*,int>> q;
        q.push({root,1});
        while(!q.empty()){
            int n = q.size();
            for(int i = 0 ;i<n ;i++){
                TreeNode* cur  = q.front().first;
                int val = q.front().second;
                q.pop();
                if(cur->left == NULL && cur->right == NULL){
                    return val;
                }
                if(cur->left) q.push({cur->left,val+1});
                if(cur->right) q.push({cur->right,val+1});
            }
        }
        return 0 ; 

    }
};