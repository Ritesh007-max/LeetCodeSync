class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> result;

        for(int i = 0; i < words.size(); i++) {
            int pos = words[i].find(x);

            if(pos != -1) {
                result.push_back(i);
            }
        }

        return result;
    }
};