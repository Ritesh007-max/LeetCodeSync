// Last updated: 4/9/2026, 11:12:12 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var thirdMax = function(nums) {
    if (nums.length === 0) return null;

    let max = nums[0];
    let maxArr = [];

    while(nums.length > 0 && maxArr.length < 3) {
        max = Math.max(...nums);
        maxArr.push(max);
        let idx = nums.indexOf(max);
        if (idx !== -1) nums.splice(idx, 1);

        nums = nums.filter(n => n !== max);
    }

    if (maxArr.length == 3) {
        return maxArr[2];
    }
    else {
        return maxArr[0];
    }
};