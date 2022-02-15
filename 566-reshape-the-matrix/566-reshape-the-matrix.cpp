class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size() != r*c)
            return mat;
        int temp_r = 0;
        int temp_c = 0;
        vector<vector<int>> v(r,vector<int>(c));
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(temp_c == c){
                    temp_c = 0;
                    temp_r++;
                }
                v[temp_r][temp_c] = mat[i][j];
                temp_c++;
            }
        }
        return v;
    }
};