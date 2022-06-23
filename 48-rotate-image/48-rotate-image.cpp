class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        // Pointers
        int left = 0, right = mat.size()-1;
        int top = 0, bottom = mat.size()-1;
        int m = mat.size()-1;
        
        while(left<right){
            for(int i = 0; i<m; i++){
                int topLeft = mat[top][left+i];
                mat[top][left+i] = mat[bottom-i][left];
                mat[bottom-i][left] = mat[bottom][right-i];
                mat[bottom][right-i] = mat[top+i][right]; 
                mat[top+i][right] = topLeft;
            }
            left++;
            right--;
            top++;
            bottom--;
            m-=2;
        }
    }
};