/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
 let ans = Number.NEGATIVE_INFINITY;
 let calc = (root)=>{
     if(root === null) return 0;
     let calx = calc(root.left);
     let caly = calc(root.right);
     ans = Math.max(ans,calx+caly);
     return 1+Math.max(calx,caly)
 }
var diameterOfBinaryTree = function(root) {
    calc(root);
    let fans = ans ;
    ans = Number.NEGATIVE_INFINITY;
    return fans;
};