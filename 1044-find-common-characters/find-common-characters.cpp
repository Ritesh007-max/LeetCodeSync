class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        string compare = words[0];

        for (char ch : compare) {
            bool foundInAll = true;

            for (int i = 1; i < words.size(); i++) {
                int pos = words[i].find(ch);

                if (pos == -1) {
                    foundInAll = false;
                    break;
                }

                words[i].erase(pos, 1);
            }

            if (foundInAll) {
                result.push_back(string(1, ch));
            }
        }

        return result;
    }
};