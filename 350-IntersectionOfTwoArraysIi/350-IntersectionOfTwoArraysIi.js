// Last updated: 4/9/2026, 11:12:18 AM
function ArrCompare(nums1, nums2) {
    if (nums1.length > nums2.length) {
        return 0;
    } else if (nums1.length < nums2.length) {
        return 1;
    }
    return 2;
}

var intersect = function (nums1, nums2) {
    const compareCall = ArrCompare(nums1, nums2);
    let arr = [];
    let small = nums1, large = nums2;

    if (compareCall === 0) {
        small = nums2;
        large = nums1;
    } else if (compareCall === 1) {
        small = nums1;
        large = nums2;
    }

    for (let i = 0; i < small.length; i++) {
        for (let j = 0; j < large.length; j++) {
            if (small[i] === large[j]) {
                arr.push(small[i]);
                large[j] = null;
                break;
            }
        }
    }

    return arr;
};
