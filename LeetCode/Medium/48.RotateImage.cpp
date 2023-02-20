class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tmp;
        int n = matrix.size() - 1;
        // Tranpose row with cols.
        for (int i = 0; i <= n; i++){
            for (int m = i + 1; m <= n; m++) {
                tmp = matrix[i][m];
                matrix[i][m] = matrix[m][i];
                matrix[m][i] = tmp;
            }
            // Reverse row when transpose is done.
            reverse(matrix[i].begin(), matrix[i].end());
        }   
    }
};