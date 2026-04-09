// Last updated: 4/9/2026, 11:11:43 AM
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        
        int min_val = *min_element(nums.begin(), nums.end());
        int max_val = *max_element(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != min_val && nums[i] != max_val) {
                return nums[i];
            }
        }
        return -1;
    }
};