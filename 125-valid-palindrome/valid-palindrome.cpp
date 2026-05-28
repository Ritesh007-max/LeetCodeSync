class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ||
                s[i] >= '0' && s[i] <= '9') {

                    if(s[i] >= 'A' && s[i] <= 'Z') {
                        s[i] += 32;
                    }
                    filtered += s[i]; 
                }
        }

        int left = 0, right = filtered.size() - 1;

        while (left < right) {
            if(filtered[left] != filtered[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};