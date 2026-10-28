class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> rowMin;
        vector<int> colMax;

        int m = matrix.size();
        int n = matrix[0].size();

        for (int i = 0; i < m; i++) {
            int mini = matrix[i][0];

            for (int j = 1; j < n; j++) {
                mini = min(mini, matrix[i][j]);
            }

            rowMin.push_back(mini);
        }

        for (int j = 0; j < n; j++) {
            int maxi = matrix[0][j];

            for (int i = 1; i < m; i++) {
                maxi = max(maxi, matrix[i][j]);
            }

            colMax.push_back(maxi);
        }
        vector<int> ans;
        for (int i = 0; i < rowMin.size(); i++) {
            for (int j = 0; j < colMax.size(); j++) {
                if (rowMin[i] == colMax[j]) {
                    ans.push_back(rowMin[i]);
                }
            }
        }
        return ans;
    }
};