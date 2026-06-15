class Solution {
public:
    string truncateSentence(string s, int k) {
        string temp = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                temp.push_back(s[i]);
            } else {
                k--;                    
                if (k == 0) break; 
                temp.push_back(' ');    
            }
        }

        return temp;
    }
};