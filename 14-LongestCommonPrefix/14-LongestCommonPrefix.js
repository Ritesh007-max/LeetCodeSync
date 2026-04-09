// Last updated: 4/9/2026, 11:12:55 AM
/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {
    let result = "";
    let minArrLen = +Infinity;

    for(let i = 0; i < strs.length; i++) {
        if(strs[i].length < minArrLen) {
            minArrLen = strs[i].length
        }
    }

    for (let j = 0; j < minArrLen; j++) {
        for (let i = 0; i < strs.length - 1; i++) {
            if (strs[i][j] !== strs[i + 1][j]) {
                return result;
            }
        }
        result += strs[0][j];
    }

    return result;
};