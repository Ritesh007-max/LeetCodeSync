// Last updated: 4/9/2026, 11:12:05 AM
/**
 * @param {string} s
 * @return {string}
 */
function reverseWords(s) {
    let letterArr = s.split(" ");
    let revLetterArr = [];

    for (let i = 0; i < letterArr.length; i++) {
        let reversedWord = letterArr[i].split("").reverse().join("");
        
        revLetterArr.push(reversedWord);
    }

    return revLetterArr.join(" ");
}