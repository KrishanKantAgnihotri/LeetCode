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
    TreeNode* build(vector<int>&preorder,vector<int>&inorder,int &i,int l,int r){
        if(l>r) return NULL;
        TreeNode* cur = new TreeNode(preorder[i]);
        int pos = m[preorder[i]];
        i++;
        
        cur->left = build(preorder,inorder,i,l,pos-1);
        cur->right = build(preorder,inorder,i,pos+1,r);
        return cur;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        m.clear();
        for(int i =  0;i<inorder.size() ;i++){
            m[inorder[i]] = i;
        }
        int idx = 0 ; 
        return build(preorder,inorder,idx,0,inorder.size()-1);
    }
};