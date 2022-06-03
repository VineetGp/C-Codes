/*
1) Reference: https://leetcode.com/problems/range-sum-query-2d-immutable/discuss/572648/C%2B%2BJavaPython-Prefix-sum-with-Picture-explain-Clean-and-Concise

2) https://www.youtube.com/watch?v=KE8MQuwE2yA&ab_channel=NeetCode
*/
class NumMatrix {
public:
    vector<vector<int>> sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        sum = vector<vector<int>>(row+1, vector<int>(col+1, 0));
        for(int r = 0; r<row; r++){
            int prefix_sum = 0;
            int above = 0;
            for(int c = 0; c<col; c++){
                prefix_sum += matrix[r][c];
                above = sum[r][c+1]; 
// [(r+1)-1][c+1] because we want value of above row and the r of matrix is r+1 for sum as we have added padded layers of one extra col and row
                sum[r+1][c+1] = prefix_sum + above;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++; col1++; row2++; col2++;
        int bottomRight = sum[row2][col2];
        int top = sum[row1-1][col2];
        int left = sum[row2][col1-1];
        int topLeft = sum[row1-1][col1-1];
        return bottomRight + topLeft - top - left;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */