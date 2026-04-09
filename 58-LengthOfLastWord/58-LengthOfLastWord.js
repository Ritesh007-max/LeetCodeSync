// Last updated: 4/9/2026, 11:12:47 AM
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    str = s.trim();
    let count = 0;

    for(let i = str.length - 1; i >= 0; i--) {
        if (str[i] == " ") return count;
        count++;
    }

    return count;
};