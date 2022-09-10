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
    string tostring(int val){
        if(val==0) return "0";
        string ans = "";
        bool neg = false;
        if(val<0) neg = true,val*=-1;
        while(val){
            ans = char(val%10+'0')+ans;
            val/=10;
        }
        if(neg)
        ans = "-"+ans;
        return ans;
    }
    void convert(TreeNode* root,string &ans){
        if(root == nullptr) return;
        ans+=tostring(root->val);
        if(root->left){
            ans+='(';
            convert(root->left,ans);
            ans+=')';
        }
        if(root->right){
            if(!(root->left)) ans+="()";
            ans+='(';
            convert(root->right,ans);
            ans+=')';
        }
    }
    string tree2str(TreeNode* root) {
        string ans = "";
        convert(root,ans);
        return ans;
    }
};