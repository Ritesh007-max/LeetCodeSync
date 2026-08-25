class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
        
        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;

        for (int sum = 0; sum < n - 1; sum++) {
            vector<int> temp;
            int i = 0, j = sum;
            while (i < m && j >= 0) {
                temp.push_back(mat[i][j]);
                i++;
                j--;
            }
            if (sum % 2 == 0) {
                reverse(temp.begin(), temp.end());
            }
            result.insert(result.end(), temp.begin(), temp.end());
        }

        vector<int> main_diag;
        int i = 0, j = n - 1;
        while (i < m && j >= 0) {
            main_diag.push_back(mat[i][j]);
            i++;
            j--;
        }
        if ((n - 1) % 2 == 0) {
            reverse(main_diag.begin(), main_diag.end());
        }
        result.insert(result.end(), main_diag.begin(), main_diag.end());

        for (int sum = n; sum <= m + n - 2; sum++) {
            vector<int> temp;
            int i = sum - n + 1, j = n - 1;
            while (i < m && j >= 0) {
                temp.push_back(mat[i][j]);
                i++;
                j--;
            }
            if (sum % 2 == 0) {
                reverse(temp.begin(), temp.end());
            }
            result.insert(result.end(), temp.begin(), temp.end());
        }

        return result;
    }
};