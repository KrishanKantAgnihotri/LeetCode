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
    int ans = 0 ;
    // 1 for lef  //need to cover
    // 2 for parent of leaf // covered but  have camera
    // 0 for covered // covered by other nodes
    int calc(TreeNode* root){
        if(root == NULL) return 0;
        int one = calc(root->left);
        int two = calc(root->right);
        // cout<<one<<" "<<two<<endl;
         if((one == 1) || (two == 1)){
            ans++;
            return 2;
        }
        if((one == 2) || (two == 2) ){
            
            return 0; 
        }
       
        return 1;
        
    }
    int minCameraCover(TreeNode* root) {
        if(calc(root) == 1) ans++;
        
        return ans;
    }
};