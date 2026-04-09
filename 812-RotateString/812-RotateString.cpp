// Last updated: 4/9/2026, 11:11:48 AM
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length())
            return false;
        if (s == goal)
            return true;

        for (int i = 0; i < s.size(); i++) {
            char firstChar = s[0];  
            s.erase(0, 1);          
            s.push_back(firstChar); 

            if (s == goal)
                return true;
        }
        return false;
    }
};