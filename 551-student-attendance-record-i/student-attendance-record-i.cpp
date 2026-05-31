class Solution {
public:
    bool checkRecord(string s) {
        int absentCount = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                absentCount++;
            }
        }

        if (absentCount >= 2)
            return false;

        int i = 0;

        while (i < s.size()) {
            if (s[i] == 'L') {
                int j = i;

                while (s[j] == 'L') {
                    j++;
                }

                if (j - i >= 3) {
                    return false;
                }

                i = j;
            }
            else {
                i++;
            }
        }

        return true;
    }
};