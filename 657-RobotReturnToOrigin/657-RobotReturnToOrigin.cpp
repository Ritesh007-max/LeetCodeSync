// Last updated: 4/9/2026, 11:12:02 AM
class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> movesMap;

        for(char c: moves) {
            movesMap[c]++;
        }

        return (movesMap['U'] == movesMap['D'] && movesMap['L'] == movesMap['R']);
    }
};