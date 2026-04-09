// Last updated: 4/9/2026, 11:12:17 AM
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if (ransomNote.length() > magazine.length()) return false;

        map<char, int> magazineMap;

        for(char c : magazine) {
            magazineMap[c]++;
        }

        for(char c: ransomNote) {
            if(magazineMap[c] == 0) {
                return false;
            }

            magazineMap[c]--;
        }

        return true;
    }
};