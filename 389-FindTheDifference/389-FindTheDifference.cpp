// Last updated: 4/9/2026, 11:12:14 AM
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int minLen = min(s.size(), t.size());

        for (int i = 0; i < minLen; i++) {
            if (s[i] != t[i]) {
                return t[i];
            }
        }

        if (s.size() > t.size()) {
            return s.back();
        } else {
            return t.back();
        }
    }
};