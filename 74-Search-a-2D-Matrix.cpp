class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        // Edge case: if target is smaller than the smallest element, it's impossible
        if (target < matrix[0][0]) {
            return false;
        }

        int row_index = 0; 
        
        // Step 1: Find the correct row using your loop strategy safely
        for(int i = 0; i < m; i++){
            if(matrix[i][0] <= target){
                row_index = i; // Track the best matching row so far
            } else {
                break; // As soon as the row header exceeds target, stop looking
            }
        }

        // Step 2: Linear scan across the chosen row
        for(int i = 0; i < n; i++){
            if(matrix[row_index][i] == target){
                return true;
            }
        }

        return false;
    }
};