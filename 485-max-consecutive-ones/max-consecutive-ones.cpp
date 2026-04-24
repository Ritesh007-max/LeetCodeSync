class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int running_count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                running_count++;
            }
            else {
                if(running_count > max_count) {
                    max_count = running_count;
                }
                running_count = 0;
            }
        }

        return max(max_count, running_count);
    }
};