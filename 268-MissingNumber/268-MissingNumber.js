// Last updated: 4/9/2026, 11:12:26 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    nums = nums.sort((a, b) => a - b);

    numsMax = nums[nums.length - 1];

    if (nums[nums.length - 1] !== nums.length) {
        return nums.length;
    }
    
    for(let i = 0; i < nums.length; i++) {
        if(nums[i] !== i) return i;
    }
};