class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string curr;

        for (char ch : path) {
            if (ch == '/') {
                if (curr == "..") {
                    if (!st.empty()) st.pop_back();
                } 
                else if (!curr.empty() && curr != ".") {
                    st.push_back(curr);
                }
                curr = "";
            } else {
                curr += ch;
            }
        }

        // Process the last component
        if (curr == "..") {
            if (!st.empty()) st.pop_back();
        } 
        else if (!curr.empty() && curr != ".") {
            st.push_back(curr);
        }

        string ans;
        for (string &dir : st) {
            ans += "/" + dir;
        }

        return ans.empty() ? "/" : ans;
    }
};