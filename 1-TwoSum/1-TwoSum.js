// Last updated: 4/9/2026, 11:12:58 AM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(array, target) {
     let ans = []
    let is = false
    for (let i = 0; i < array.length; i++) {
        let num1 = array[i];
        for (let j = i + 1; j < array.length; j++) {
            let num2 = array[j];
            if ((num1 + num2 )== target) {
                ans.push(i)
                ans.push(j)
                is = true
                break;
            }
        }
        if(is) {
            return ans
        }
    }
};
