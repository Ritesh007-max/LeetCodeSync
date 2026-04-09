// Last updated: 4/9/2026, 11:12:50 AM
class Solution {
public:
    int findLow(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int ans = -1;

        while (i <= j) {
            int mid = (j + i) / 2;

            if (nums[mid] == target) {
                ans = mid;
                j = mid - 1;
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }

        return ans;
    }

    int findHigh(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int ans = -1;

        while (i <= j) {
            int mid = (j + i)/ 2;

            if (nums[mid] == target) {
                ans = mid;
                i = mid + 1;
            } else if (nums[mid] < target) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findLow(nums, target), findHigh(nums, target)};
    }
};