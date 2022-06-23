class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==1 && matrix[0].size()==1){
            if(matrix[0][0]==target) return true;
            else return false;
        }
        for(int r = 0; r<matrix.size(); r++){
            int start = 0;
            int end = matrix[0].size()-1;
            int m;
            while(start<=end){
                m = (start+end)/2;
                if(matrix[r][m] == target) return true;
                else if(matrix[r][m]<target) start = m+1;
                else end = m-1;
            }
        }
        return false;
    }
};