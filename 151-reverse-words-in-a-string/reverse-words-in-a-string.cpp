class Solution {
public:
    string reverseWords(string s) {

        vector<string> words;
        string word = "";
        string sentence = "";

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ' ') {
                word += s[i];
            } else {
                if (word != "") {
                    words.push_back(word);
                    word = "";
                }
            }
        }

        if (word != "") {
            words.push_back(word);
        }

        for(int i = words.size() - 1; i >= 0; i--) {
            sentence += words[i];
            if (i != 0) sentence += " ";
        }

        return sentence;
    }
};