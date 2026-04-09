// Last updated: 4/9/2026, 11:12:44 AM
class Solution {
public:
    int mySqrt(int x) {
        
        if (x == 0 || x == 1)
            return x;

        int ans = 1;

        for (long long i = 1; i <= x / 2; i++) {
            
            if (i <= x / i) {
                ans = i;
            }
            else {
                break;
            }
        }

        return ans;
    }
};