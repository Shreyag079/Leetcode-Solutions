class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int rows = matrix.size();
        int cols = matrix[0].size();

        int r = 0, c = -1, k = 1;

        while (rows > 0 && cols > 0) {
            
            for (int i = 0; i < cols; i++) {
                result.push_back(matrix[r][c += k]);
            }
            rows--;

            
            for (int i = 0; i < rows; i++) {
                result.push_back(matrix[r += k][c]);
            }
            cols--;

          
            k *= -1;
        }

        return result;
    }
};
