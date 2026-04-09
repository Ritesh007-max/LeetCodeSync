// Last updated: 4/9/2026, 11:11:50 AM
class Solution {
public:
    string toLowerCase(string s) {

        string lowerS;
        
        for(int i = 0; i < s.size(); i++) {
            lowerS.push_back(tolower(s[i]));
        }

        return lowerS;

    }
};