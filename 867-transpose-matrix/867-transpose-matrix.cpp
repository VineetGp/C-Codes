/*
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> res;
        for(int j = 0; j<matrix[0].size(); j++){
            vector<int> temp;
            for(int i = 0; i<matrix.size(); i++){
                temp.push_back(matrix[i][j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
*/

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};