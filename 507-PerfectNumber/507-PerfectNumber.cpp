// Last updated: 4/9/2026, 11:12:08 AM
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1) return false;

        int sum = 0;

        for(int i = 1; i <= num / 2; i++) {
            if(num % i == 0) {
                sum += i;
            }
        }

        return sum == num;
    }
};