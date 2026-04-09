// Last updated: 4/9/2026, 11:11:46 AM
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> ban(banned.begin(), banned.end());
        unordered_map<string, int> freq;

        string word = "";
        for(char c : paragraph) {
            if(isalpha(c)) {
                word += tolower(c);
            } else {
                if(word != "" && !ban.count(word)) {
                    freq[word]++;
                }
                word = "";
            }
        }

        // last word
        if(word != "" && !ban.count(word)) {
            freq[word]++;
        }

        string ans = "";
        int maxFreq = 0;

        for(auto &p : freq) {
            if(p.second > maxFreq) {
                maxFreq = p.second;
                ans = p.first;
            }
        }

        return ans;
    }
};