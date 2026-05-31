class Solution {
public:
    bool isBalanced(string num) {
        int oddSum = 0, evenSum = 0;

        for(int i = 0; i < num.size(); i++) {
            int digit = num[i] - '0';

            if(i % 2 == 0) {
                evenSum += digit;
            } 
            else {
                oddSum += digit;
            }
        }

        if(evenSum == oddSum) return true;
        else return false;
    }
};