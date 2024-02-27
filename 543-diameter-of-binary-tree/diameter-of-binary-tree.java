/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    static int ans = Integer.MIN_VALUE;
    public static int calc(TreeNode root){
        if(root==null){
            return 0 ; 
        }
        int valx = calc(root.left);
        int valy = calc(root.right);
        ans = Math.max(ans,valx+valy);
        return 1+Math.max(valx,valy);
    }
    public int diameterOfBinaryTree(TreeNode root) {
        calc(root);
        int fans = ans;
        ans = Integer.MIN_VALUE;
        return fans;
    }
}