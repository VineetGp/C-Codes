class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // First transpose the matrix and then reverse the columns
        int r = matrix.size();
        int c = matrix[0].size();
        //Transpose of matrix
        for(int i = 0; i<r; i++){
            for(int j = i; j<c; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        
        for(int i = 0; i<r; i++){
            int s = 0, e = c-1;
            while(s<e){
                swap(matrix[i][s], matrix[i][e]);
                s++;
                e--;
            }
        }
    }
};