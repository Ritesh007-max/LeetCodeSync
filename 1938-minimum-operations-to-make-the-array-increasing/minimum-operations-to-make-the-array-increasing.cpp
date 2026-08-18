class Solution {
public:
    int minOperations(vector<int>& nums) {
        int max = nums[0];
        int count = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > max) {
                max = nums[i];
            } else {
                int needed = nums[i - 1] + 1 - nums[i];
                nums[i] = nums[i-1] + 1;
                count += needed;
                
                max = nums[i];

                
            }
        }

        return count;
    }
};