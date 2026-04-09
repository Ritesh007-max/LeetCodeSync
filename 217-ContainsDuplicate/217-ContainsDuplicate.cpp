// Last updated: 4/9/2026, 11:12:31 AM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // int minIndex;

        // for(int i = 0; i < nums.size(); i++) {
        //     minIndex = i;

        //     for(int j = i + 1; j < nums.size(); j++) {
        //         if(nums[j] < nums[minIndex]) {
        //             minIndex = j;
        //         }
        //     }

        //     swap(nums[i], nums[minIndex]);
        // }

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] == nums[i + 1]) {
                return true;
            }
        }

        return false;
    }
};