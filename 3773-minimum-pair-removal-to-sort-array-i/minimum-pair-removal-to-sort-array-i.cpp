class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        int count = 0;

        while (!is_sorted(nums.begin(), nums.end())) {

            int minSum = INT_MAX;
            int minIndex = -1;

            for (int i = 0; i < nums.size() - 1; i++) {
                int windowSum = nums[i] + nums[i + 1];

                if (windowSum < minSum) {
                    minSum = windowSum;
                    minIndex = i;
                }
            }

            nums[minIndex] = minSum;
            nums.erase(nums.begin() + minIndex + 1);

            count++;
        }

        return count;
    }
};