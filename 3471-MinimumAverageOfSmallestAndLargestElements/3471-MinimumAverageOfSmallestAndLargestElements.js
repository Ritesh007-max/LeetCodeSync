// Last updated: 4/9/2026, 11:11:42 AM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function (nums) {
    nums = nums.slice();
    const avgArr = [];

    while(nums.length >= 2) {
        const maxNum = Math.max(...nums);
        const maxIdx = nums.indexOf(maxNum);
        nums.splice(maxIdx, 1);

        const minNum = Math.min(...nums);
        const minIdx = nums.indexOf(minNum);
        nums.splice(minIdx, 1);

        avgArr.push((maxNum + minNum) / 2);
    }

    return Math.min(...avgArr);
};