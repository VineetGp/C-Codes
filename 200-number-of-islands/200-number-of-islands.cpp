// class Solution {
// public:
//     int numIslands(vector<vector<char>>& grid) {
//         int m = grid.size(), n = m ? grid[0].size() : 0, islands = 0;
//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (grid[i][j] == '1') {
//                     islands++;
//                     eraseIslands(grid, i, j);
//                 }
//             }
//         }
//         return islands;
//     }
// private:
//     void eraseIslands(vector<vector<char>>& grid, int i, int j) {
//         int m = grid.size(), n = grid[0].size();
//         if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
//             return;
//         }
//         grid[i][j] = '0';
//         eraseIslands(grid, i - 1, j);
//         eraseIslands(grid, i + 1, j);
//         eraseIslands(grid, i, j - 1);
//         eraseIslands(grid, i, j + 1);
//     }
// };


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), islands = 0;
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j]=='1'){
                    islands++;
                    grid[i][j] = '0';
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    while(!q.empty()){
                        int x = q.front().first;
                        int y = q.front().second;
                        q.pop();
                        for(int k = 0; k<4; k++){
                            int nx = x + dx[k];
                            int ny = y + dy[k];
                            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]=='1') {
                                q.push({nx,ny});
                                grid[nx][ny] = '0';
                            }
                        }
                    }
                }
            }
        }
        return islands;
    }

};