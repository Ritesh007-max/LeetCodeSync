class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string temp = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] != '-') {
                temp += toupper(s[i]);
            }
        }

        int count = 0;
        string result = ""; 

        int first_size = temp.size() % k;

        if (first_size == 0) {
            first_size = k;   
        }

        for(int i = 0; i < temp.size(); i++) {
            if(count == first_size) {
                result += '-';
                count = 0;
                first_size = k;
            }

            result += temp[i];
            count++;
        }

        return result;
    }
};