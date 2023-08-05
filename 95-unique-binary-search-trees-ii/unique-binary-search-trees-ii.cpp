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
    vector<TreeNode*> buildTree(int s,int e){
        if(s>e) return {NULL};
        if(s == e) return {new TreeNode(s)};
        vector<TreeNode*> ans; 
        for(int i = s ;i<=e; i++){
            vector<TreeNode*> l = buildTree(s,i-1);
            vector<TreeNode*> r = buildTree(i+1,e);
            for(TreeNode* j : l){
                for(TreeNode* k : r){
                    TreeNode* root = new TreeNode(i);
                    root->left =  j;
                    root->right = k;
                    ans.push_back(root);
                }
            }
        }
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {
        return buildTree(1,n);
    }
};