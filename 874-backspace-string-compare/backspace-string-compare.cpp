class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack<char> sStack;
        for (char c : s) {
            if (c != '#') {
                sStack.push(c);
            } else if (!sStack.empty()) {
                sStack.pop();
            }
        }

        stack<char> tStack;
        for (char c : t) {
            if (c != '#') {
                tStack.push(c);
            } else if (!tStack.empty()) {
                tStack.pop();
            }
        }

        return sStack == tStack;
    }
};