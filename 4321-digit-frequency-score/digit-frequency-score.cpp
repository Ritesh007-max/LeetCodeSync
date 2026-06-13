using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        vector<int> digits;
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            digits.push_back(digit);
            n /= 10;              
        }

        for (int d : digits) {
            freq[d]++;
        }

        for (auto entry : freq) {
            sum += entry.first * entry.second;
        }

        return sum;
    }
};
