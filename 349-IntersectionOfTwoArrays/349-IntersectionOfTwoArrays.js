// Last updated: 4/9/2026, 11:12:19 AM
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let interArr = [];
    let len1 = nums1.length;
    let len2 = nums2.length;

    const maxLen = Math.max(len1, len2);
    const minLen = Math.min(len1, len2);

    if (maxLen == len1) {
        for (let i = len1 - 1; i >= 0; i--) {
            if (i >= nums1.length) continue;
            for (let j = len2 - 1; j >= 0; j--) {
                if (j >= nums2.length) continue;
                if (nums1[i] == nums2[j] && !(interArr.includes(nums1[i]))) {
                    interArr.push(nums1[i]);
                    nums1.splice(i, 1);
                    nums2.splice(j, 1);
                    len1 = nums1.length;
                    len2 = nums2.length;
                    break;
                }
            }
        }
    } else {
        for (let i = len2 - 1; i >= 0; i--) {
            if (i >= nums2.length) continue;
            for (let j = len1 - 1; j >= 0; j--) {
                if (j >= nums1.length) continue;
                if (nums1[j] == nums2[i] && !(interArr.includes(nums2[i]))) {
                    interArr.push(nums2[i]);
                    nums1.splice(j, 1);
                    nums2.splice(i, 1);
                    len1 = nums1.length;
                    len2 = nums2.length;
                    break;
                }
            }
        }
    }

    return interArr;
};