// Last updated: 4/9/2026, 11:12:37 AM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int size = nums.size() / 2;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        for(auto it: freq) {
            if(it.second > size) {
                return it.first;
            }
        }

        return -1;
    }
};