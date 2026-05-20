class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (count > 0) {
                    result.push_back('(');
                }
                count++;
            } else if (s[i] == ')') {
                count--;
                if (count > 0) {
                    result.push_back(')');
                }
            }
        }
        return result;
    }
};