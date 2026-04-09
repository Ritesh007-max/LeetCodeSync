// Last updated: 4/9/2026, 11:12:38 AM
/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let strArr = s.trim().split(" ");
    let revStr = "";

    for (let i = strArr.length - 1; i >= 0; i--) {
        if (strArr[i] !== "") {
            revStr += strArr[i] + " ";
        }
    }

    return revStr.trim();
};
