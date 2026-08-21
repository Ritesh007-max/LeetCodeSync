class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> result;

        int top = 0, bottom = n - 1;
        int left = 0, right = m - 1;

        while (top <= bottom && left <= right) {

            int i = left;
            while (i <= right) {
                result.push_back(matrix[top][i]);
                i++;
            }
            top++; 

            int j = top;
            while (j <= bottom) {
                result.push_back(matrix[j][right]);
                j++;
            }
            right--;
\
            if (top <= bottom) {
                i = right;
                while (i >= left) {
                    result.push_back(matrix[bottom][i]);
                    i--;
                }
                bottom--; 
                }

            if (left <= right) {
                j = bottom;
                while (j >= top) {
                    result.push_back(matrix[j][left]);
                    j--;
                }
                left++; 
            }
        }

        return result;
    }
};