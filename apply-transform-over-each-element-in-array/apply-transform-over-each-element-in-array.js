/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
       return arr.map((ele,id)=> fn(ele,id));
};