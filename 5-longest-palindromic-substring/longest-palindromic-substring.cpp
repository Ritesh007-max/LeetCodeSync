class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0, max_len = 0;

        for (int i = 0; i < s.size(); i++) {

            int left = i, right = i;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            int len1 = right - left - 1;
            if (len1 > max_len) {
                max_len = len1;
                start = left + 1;
            }

            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                left--;
                right++;
            }
            int len2 = right - left - 1;
            if (len2 > max_len) {
                max_len = len2;
                start = left + 1;
            }
        }

        return s.substr(start, max_len);
    }
};