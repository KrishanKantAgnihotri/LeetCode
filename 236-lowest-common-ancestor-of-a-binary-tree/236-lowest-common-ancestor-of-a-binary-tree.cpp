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
    unordered_map<TreeNode*,TreeNode*> m;
    unordered_map<TreeNode*,int> lvl;
    void traverse(TreeNode* root,int lv,TreeNode* par=NULL){
        if(root==NULL) return ;
        m[root] = par;
        lvl[root] = lv+1;
        lv++;
        traverse(root->left,lv,root);
        traverse(root->right,lv,root);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        traverse(root,0);
        if(lvl[q]>lvl[p]) swap(p,q);
        while(lvl[p]>lvl[q]){
            p = m[p];
        }
        while(p!=q){
            p = m[p];
            q = m[q];
        }
        return p;
    }
};