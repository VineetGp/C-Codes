/*
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
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int begin = 0, end = n*m-1;
        while(begin<=end)
        {
            int mid = (begin + end)/2;
            int mid_val = matrix[mid/m][mid%m];
            if(mid_val==target)
                return true;
            else if(mid_val<target)
                begin = mid+1;
            else
                end = mid-1;
        }
        return false;
    }
};