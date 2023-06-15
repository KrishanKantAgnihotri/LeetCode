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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        map<TreeNode*,int> m;
        int fans = 0 ;
        int mx = INT_MIN;
        int lvl = 0 ;  
        while(q.size()){
            int n = q.size();
            int ans = 0 ;
            
            lvl++; 
            for(int i = 0 ;i<n ;i++){
                TreeNode* u = q.front();
                q.pop();
                if(u == NULL) continue;
                if(m.count(u)) continue;
                m[u]++;
                ans+=(u->val);
                if(u->left!=NULL)
                q.push(u->left);
                if(u->right!=NULL)
                q.push(u->right);
            }
            if(ans>mx){
                fans = lvl;
                mx = ans;
            }
        }
        return fans;
    }
};