class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                // If count > 0, this '(' is inside an outer pair
                if (count > 0) {
                    result.push_back(s[i]);
                }
                count++;
            } else if (s[i] == ')') {
                count--;
                // If count > 0 after decrementing, this ')' is inside an outer pair
                if (count > 0) {
                    result.push_back(s[i]);
                }
            }
        }
        return result;
    }
};