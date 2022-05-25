class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int i,j;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> res(m, vector<int> (n,0));
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                res[(i+(j+k)/n)%m][(j+k)%n] = grid[i][j];
            }
        }
        return res;
    }
};

// (j + k) % n gives the new column index. j+k shifts the element to right; but, it may overflow, so take the remainder of dividing it by column size n.

//(i + (j + k) / n) % m gives the new row index. (j + k) / n will give 1 or above if the column size was overflown, so we add it to existing row index i, i.e. i + (j + k) / n. But row index may also overflow, which needs to be reset to 0 again if it reaches row size m, so we take the remainder of dividing it by row size m.