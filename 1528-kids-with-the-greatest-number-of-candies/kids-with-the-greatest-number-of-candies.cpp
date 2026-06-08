class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size(), false);

        int maxCandies = 0;

        for(int i = 0; i < candies.size(); i++) {
            if(maxCandies < candies[i]) {
                maxCandies = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++) {
            int totalCandies = candies[i] + extraCandies;

            if(totalCandies >= maxCandies) {
                result[i] = true;
            }
        }

        return result;
    }
};