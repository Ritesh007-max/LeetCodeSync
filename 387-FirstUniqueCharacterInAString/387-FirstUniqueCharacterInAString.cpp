// Last updated: 4/9/2026, 11:12:15 AM
class Solution {
public:
    int firstUniqChar(string s) {
        
        for (int i = 0; i < s.size(); i++) {
            bool isUnique = true; 

            for (int j = 0; j < s.size(); j++) {
                if (i != j && s[i] == s[j]) {
                    isUnique = false; 
                    break;            
                }
            }

            if (isUnique) {
                return i;
            }
        }
        return -1;
    }
};