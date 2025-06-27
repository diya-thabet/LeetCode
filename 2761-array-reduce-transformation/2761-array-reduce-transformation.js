/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    let res = init;
    const len = nums.length;
    for (let i = 0; i < len; i++) {
        res = fn(res, nums[i]);
    }
    return res;
};