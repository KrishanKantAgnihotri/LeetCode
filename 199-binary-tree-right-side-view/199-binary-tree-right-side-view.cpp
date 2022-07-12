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
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            int n = q.size();
            int val = -1;
            for(int i = 0 ;i<n ;i++){
                if(q.front()!=NULL){
                    q.push(q.front()->left);
                    q.push(q.front()->right);
                    val = q.front()->val;
                    
                }
                q.pop();
            }
            if(val!=-1)
                ans.push_back(val);
        }
        return ans;
    }
};