// Last updated: 4/9/2026, 11:12:42 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function (nums) {
    //A1:  first sort the array use obj add each unique element in it as key and their frequeny as the value and return the key with the highest frequency 

    nums = nums.sort((a, b) => a - b);

    let count = 0;
    let majority = nums[0];

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] == nums[i - 1]) {
            count++;
            if (count + 1 > Math.floor(nums.length / 2)) {
                majority = nums[i];
                break;
            }
        }
        else {
            count = 0;
        }
    }

    return majority;
};