// Last updated: 4/9/2026, 11:12:51 AM
class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() > haystack.size()) return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            string subNeedle = "";
            for (int j = 0; j < needle.size(); j++) {
                subNeedle += haystack[i + j];
            }
            
            if (subNeedle == needle) {
                return i;
            }
        }
        return -1;
    }
};