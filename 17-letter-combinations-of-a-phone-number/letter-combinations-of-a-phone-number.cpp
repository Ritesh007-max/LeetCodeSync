class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<char>> phoneMap = {{},
                                         {},
                                         {'a', 'b', 'c'},
                                         {'d', 'e', 'f'},
                                         {'g', 'h', 'i'},
                                         {'j', 'k', 'l'},
                                         {'m', 'n', 'o'},
                                         {'p', 'q', 'r', 's'},
                                         {'t', 'u', 'v'},
                                         {'w', 'x', 'y', 'z'}};

        vector<string> result = {""};

        for (char digit : digits) {

            int index = digit - '0';
            vector<string> temp;

            for (string s : result) {
                for (char c : phoneMap[index]) {
                    temp.push_back(s + c);
                }
            }

            result = temp;
        }

        if (digits.empty())
            return {};

        return result;
    }
};