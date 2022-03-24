class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        vector<int> row(r,0);
        vector<int> column(c,0);
        int t = max(r,c);
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    row[i] = 1;
                    column[j] = 1;
                }
            }
        }
       for(int i=0; i<r; i++){
           if(row[i]==1){
               for(int j=0; j<c; j++){
                   matrix[i][j]=0;
               }
           }
       }
       for(int i=0; i<c; i++){
           if(column[i]==1){
               for(int j=0; j<r; j++){
                   matrix[j][i]=0;
               }
           }
       }
    }          
};