// Last updated: 4/9/2026, 11:12:11 AM
class Solution {
public:
    string addStrings(string num1, string num2) {
        string res = "";
        int i = num1.size() - 1;
        int j = num2.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry > 0) {

            int di = (i >= 0) ? num1[i--] - 48 : 0;
            int dj = (j >= 0) ? num2[j--] - 48 : 0;

            int sum = di + dj + carry;
            res.push_back((sum % 10) + 48);
            carry = sum / 10;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};