class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> stone_freq;

        for (char s : stones) {
            stone_freq[s]++;
        }

        int sum = 0;

        for(int i = 0; i < jewels.size(); i++) {
            if(stone_freq.find(jewels[i]) != stone_freq.end()) {
                sum += stone_freq[jewels[i]];
            }
        }
        
        return sum;
    }
};