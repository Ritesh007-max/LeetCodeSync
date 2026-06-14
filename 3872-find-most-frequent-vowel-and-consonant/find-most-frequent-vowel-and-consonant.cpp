class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowels;
        unordered_map<char, int> consonants;

        int maxFreqVowel = 0;
        int maxFreqConsonant = 0;


        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u') {
                vowels[s[i]]++;
            }
            else {
                consonants[s[i]]++;
            }
        }

        for(auto n: vowels) {
            if(n.second > maxFreqVowel) {
                maxFreqVowel = n.second;
            }
        }

        for(auto n: consonants) {
            if(n.second > maxFreqConsonant) {
                maxFreqConsonant = n.second;
            }
        }

        return maxFreqConsonant + maxFreqVowel;

    }
};