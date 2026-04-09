// Last updated: 4/9/2026, 11:12:23 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {
            if (freq[nums[i]] > 0) { 
                return nums[i]; 
            } else {
                freq[nums[i]] = 1;
            }
        }

        return -1;
    }
};