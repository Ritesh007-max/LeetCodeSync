class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> charToWord;
        unordered_map<string, char> wordToChar;

        vector<char> chars;

        for (int i = 0; i < pattern.size(); i++) {
            chars.push_back(pattern[i]);
        }

        vector<string> words;
        string word = "";

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += s[i];
            }
        }

        if (word != "") {
            words.push_back(word);
        }

        if (chars.size() != words.size()) {
            return false;
        }

        for (int i = 0; i < chars.size(); i++) {
            char ch = chars[i];
            string currentWord = words[i];

            if (charToWord.count(ch)) {
                if (charToWord[ch] != currentWord) {
                    return false;
                }
            } else {
                charToWord[ch] = currentWord;
            }

            if (wordToChar.count(currentWord)) {
                if (wordToChar[currentWord] != ch) {
                    return false;
                }
            } else {
                wordToChar[currentWord] = ch;
            }
        }

        return true;
    }
};