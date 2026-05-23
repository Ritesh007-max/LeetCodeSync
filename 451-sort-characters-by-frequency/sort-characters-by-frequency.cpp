class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;

        for(char c : s) {
            freq[c]++;
        }

        multimap<int, char, greater<int>> sorted_freq;

        for (auto p : freq) {
            sorted_freq.insert({p.second, p.first});
        }

        string result = "";
        
        for (auto& p : sorted_freq) {
            result.append(p.first, p.second);
        }
        
        return result;
    }
};