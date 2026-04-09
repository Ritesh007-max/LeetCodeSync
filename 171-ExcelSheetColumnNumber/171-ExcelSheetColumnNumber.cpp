// Last updated: 4/9/2026, 11:12:34 AM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        reverse(columnTitle.begin(), columnTitle.end());
        int columnNumber = 0;

        for(int i = 0; i < columnTitle.size(); i++) {
            char ch = columnTitle[i];
            int value = ch - 64;
            
            columnNumber += value * pow(26, i);
        }

        return columnNumber;
    }
};