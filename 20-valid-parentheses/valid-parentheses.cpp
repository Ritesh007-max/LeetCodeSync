class Solution {
public:
    bool isValid(string braket) {
        vector<char> psudoStack;
        bool ans = true;

        for (int i = 0; i < braket.size(); i++) {
            if (braket[i] == '{' || braket[i] == '(' || braket[i] == '[')
                psudoStack.push_back(braket[i]);

            if (braket[i] == '}' || braket[i] == ']' || braket[i] == ')') {
                if (!psudoStack.empty()) {
                    char top = psudoStack.back();
                    if ((braket[i] == '}' && top == '{') ||
                        (braket[i] == ']' && top == '[') ||
                        (braket[i] == ')' && top == '(')) {
                        psudoStack.pop_back();
                    } else {
                        ans = false;
                        return false;
                    }
                } else {
                    ans = false;
                    return false;
                }
            }
        }

        if (psudoStack.size() == 0)
            ans = true;
        else
            ans = false;

        return ans;
    }
};