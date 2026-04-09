// Last updated: 4/9/2026, 11:11:38 AM
class Solution {
public:
    int averageValue(vector<int>& nums) {
        int sum = 0, count = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 3 == 0 && nums[i] % 2 == 0) {
                sum += nums[i];
                count++;
            }
        }

        if (count == 0) {
            return 0;
        }
        else {
            return (sum / count);
        }


    }
};