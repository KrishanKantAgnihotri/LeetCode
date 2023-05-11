/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let ele = init;
    for(let i = 0 ; i<nums.length; i++){
        ele = fn(ele,nums[i]);
    }
    return ele;
};