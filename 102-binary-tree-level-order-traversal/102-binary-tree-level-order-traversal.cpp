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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            int n = q.size();
            vector<int> tmp;
            for(int i = 0 ;i<n ;i++){
                if(q.front()!=NULL){
                    tmp.push_back(q.front()->val);
                    q.push(q.front()->left);
                    q.push(q.front()->right);
                }
                q.pop();
            }
            if(tmp.size()){
            ans.push_back(tmp);
            tmp.clear();
            }
        }
        return ans;
    }
};