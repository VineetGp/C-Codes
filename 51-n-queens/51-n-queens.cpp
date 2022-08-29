//https://www.youtube.com/watch?v=i05Ju7AftcM&list=PLgUwDviBIf0rGlzIn_7rsaR2FQ5e6ZOL9&index=14&ab_channel=takeUforward

class Solution {
public:
    
    void solve(int col, vector<string> &board, vector<vector<string>> &res, vector<int> &leftRow,
              vector<int> &lowDiag, vector<int> &uppDiag,  int n){
        
        if(col == n){
            res.push_back(board);
            return;
        }
        
        for(int row = 0; row < n; row++){
            if(leftRow[row]==0 && lowDiag[row+col]==0 && uppDiag[n-1+row-col]==0){
                board[row][col] = 'Q';
                leftRow[row] = 1 ;
                lowDiag[row+col] = 1; 
                uppDiag[n-1+row-col] = 1;
                solve(col+1, board, res, leftRow, lowDiag, uppDiag, n);
                board[row][col] = '.';
                leftRow[row] = 0 ;
                lowDiag[row+col] = 0; 
                uppDiag[n-1+row-col] = 0;
                
            }
        }   
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n);
        string s(n, '.');
        for(int i = 0; i<n; i++){
            board[i] = s;
        }
        
        vector<int> leftRow(n,0), uppDiag(2*n - 1, 0), lowDiag(2*n - 1, 0);
        solve(0, board, res, leftRow, lowDiag, uppDiag, n);
        return res;
        
    }
};