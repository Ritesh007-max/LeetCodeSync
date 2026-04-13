class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        vector<int> countFreq;
        for (auto const& [key, value] : freq) {
            countFreq.push_back(value);
        }

        sort(countFreq.begin(), countFreq.end());

        for(int i = 0; i < countFreq.size() - 1; i++) {
            if(countFreq[i] == countFreq[i + 1]) {
                return false;
            }
        }

        return true;
    }
};