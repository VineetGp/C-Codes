//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        queue<vector<int>> q;
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dist (m, vector<int>(n, 1e9));
        int sx = source.first, sy = source.second;
        int ex = destination.first, ey = destination.second;
        // if(sx==ex && sy==ey) return 0;
        q.push({0,sx,sy});
        dist[sx][sy] = 0;
        int dx[4] = {-1,1,0,0};
        int dy[4] = {0,0,-1,1};
        while(!q.empty()){
            auto it = q.front();
            int dis = it[0];
            int x = it[1];
            int y = it[2];
            q.pop();
            if(x == ex && y == ey) return dis;
            for(int i = 0; i<4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx>=0 && nx<m && ny>=0 && ny<n && dist[nx][ny] > dis+1 && grid[nx][ny]==1){
                    dist[nx][ny] = dis+1;
                    // if(nx == ex && ny == ey) return dis+1;
                    q.push({dis+1, nx, ny});
                }
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends