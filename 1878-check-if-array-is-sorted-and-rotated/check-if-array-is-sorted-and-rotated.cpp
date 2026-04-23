class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums == sortedNums) return true;

            int firstElem = nums[0];
            nums.erase(nums.begin());
            nums.push_back(firstElem);
        }

        return false;
    }
};