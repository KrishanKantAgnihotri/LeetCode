/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*> u;
    set<TreeNode*> vis;
    vector<int> distanceK(TreeNode* root, TreeNode* t, int k) {
        dfs(root,t);
        queue<TreeNode*> q;
        q.push(t);
        vector<int> ans;
        while((!q.empty() && (k>=0))){
            int n = q.size();
            for(int i = 0 ; i<n ;i ++){
                TreeNode* cur = q.front();
                q.pop();
                vis.insert(cur);
                if(k == 0){
                    ans.push_back(cur->val);
                }
                if(!vis.count(u[cur]) && u[cur]) q.push(u[cur]);
                if(!vis.count(cur->left) && cur->left) q.push(cur->left);
                if(!vis.count(cur->right)&& cur->right) q.push(cur->right);
            }
            k--;
        }
        return ans;
    }
    void dfs(TreeNode* root ,TreeNode* target){
        if(root == NULL || root == target) return ;

        if(root->left){
            u[root->left] = root;
            dfs(root->left,target);
        }
        if(root->right){
            u[root->right] = root;
            dfs(root->right,target);
        }
    }
};