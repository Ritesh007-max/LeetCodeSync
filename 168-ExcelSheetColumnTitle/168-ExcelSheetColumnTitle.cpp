// Last updated: 4/9/2026, 11:12:36 AM
class Solution {
public:
    string convertToTitle(int columnNumber) {

        string result = "";
        
        while(columnNumber > 0) {

            int remainder = columnNumber % 26;

            if (remainder == 0) {
                result.insert(0, "Z");
                columnNumber = (columnNumber / 26) - 1;
            }
            else {
                char ch = 'A' + remainder - 1;
                result.insert(result.begin(), ch);
                columnNumber = columnNumber / 26;
            }
        }

        return result;
    }
};