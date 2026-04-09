// Last updated: 4/9/2026, 11:12:09 AM
/**
 * @param {string} s
 * @return {number}
 */
var countSegments = function(s) {

    let strArr = s.trim().split(' ');
    let len = 0;
    
    for(let i = 0; i < strArr.length; i++) {
        if (strArr[i] != '') {
            len++;
        }
    }
    
    return len;
};