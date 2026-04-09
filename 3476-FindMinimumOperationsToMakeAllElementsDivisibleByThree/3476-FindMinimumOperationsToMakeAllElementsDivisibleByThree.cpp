// Last updated: 4/9/2026, 11:11:39 AM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int operations = 0;

        for(int num : nums) {
            if(num % 3 != 0) {
                operations++;
            }
        }

        return operations;
    }
};