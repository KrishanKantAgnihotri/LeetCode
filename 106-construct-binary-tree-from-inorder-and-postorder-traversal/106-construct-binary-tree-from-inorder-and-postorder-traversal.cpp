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
    map<int,int> m;
    TreeNode* build(vector<int>& inorder,vector<int>& postorder,int &i,int l,int r){
        if(i<0){
            return NULL;
        }
        if(l>r){
            return NULL;
        }
        int cur = m[postorder[i]];
        i--;
        TreeNode* n = new TreeNode(inorder[cur]);
        n->right = build(inorder,postorder,i,cur+1,r);
        n->left = build(inorder,postorder,i,l,cur-1);
        
        return n;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        for(int k = 0 ;k<inorder.size();k++){
           m[inorder[k]] = k;
        }
        int i = postorder.size()-1;
        return build(inorder,postorder,i,0,inorder.size()-1);
    }
};