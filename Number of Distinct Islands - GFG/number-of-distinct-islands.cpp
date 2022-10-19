//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    bool isSafe(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& vis, string& temp){
        int m = grid.size(), n = grid[0].size();
        if(x<0 || x>=m || y<0 || y>=n || vis[x][y] == 1 || grid[x][y] != 1) {
            temp += "_";
            return false;
        }
        return true;
    }
  
    void dfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& vis, string &temp){
        
        vis[x][y] = 1;
        if(isSafe(x+1, y, grid, vis, temp)){
            temp.push_back('D');
            dfs(x+1, y, grid, vis, temp);
        }

        if(isSafe(x-1, y, grid, vis, temp)){
            temp.push_back('U');
            dfs(x-1, y, grid, vis, temp);
        }

        if(isSafe(x, y-1, grid, vis, temp)){
            temp.push_back('L');
            dfs(x, y-1, grid, vis, temp);
        }

        if(isSafe(x, y+1, grid, vis, temp)){
            temp.push_back('R');
            dfs(x, y+1, grid, vis, temp);
        }
        
        
    }
    int countDistinctIslands(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        unordered_map<string, int> s;
        bool flag;
        string temp;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    temp = "";
                    dfs(i,j,grid,vis,temp);
                    // cout<<temp<<endl;
                    s[temp]++;
                }
            }
        }
        return s.size();
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
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends