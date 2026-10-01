class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            vector<bool> row(n + 1, false);
            vector<bool> col(n + 1, false);

            for (int j = 0; j < n; j++) {
                int rowVal = matrix[i][j];
                int colVal = matrix[j][i];

                if (row[rowVal] || col[colVal])
                    return false;

                row[rowVal] = true;
                col[colVal] = true;
            }
        }

        return true;
    }
};