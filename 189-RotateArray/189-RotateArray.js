// Last updated: 4/9/2026, 11:12:33 AM
function rotate(arr, k) {
    const n = arr.length;
    k = k % n;

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    console.log(arr);
}

function reverse(arr, i, j) {
    while (i < j) {
        [arr[i], arr[j]] = [arr[j], arr[i]];
        i++;
        j--;
    }
}

rotate([1,2,3,4,5,6,7], 3);


