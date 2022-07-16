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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        int x = 0 ; 
        while(q.size()){
            int n = q.size();
            vector<int> cur;
            for(int i = 0 ;i<n ;i++){
                if(q.front()!=NULL){
                    q.push(q.front()->left);
                    q.push(q.front()->right);
                    cur.push_back(q.front()->val);
                }
                q.pop();
            }
            if(cur.size()==0) continue;
            if(x)
                reverse(cur.begin(),cur.end());
            x^=1;
            
            ans.push_back(cur);
            cur.clear();
            
        }
        return ans;
        
    }
};