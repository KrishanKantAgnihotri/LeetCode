/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let ans = 0;
    nums.forEach(nums => ans^=nums);
    for(let i = 1 ;i<=nums.length ;i++) ans^=i;
    return ans;
};