class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> v;
        int i, j;
        int k = 0;
        if (m*n != original.size())
            return v;
        for(i=0; i<m; i++){
            vector<int> v1;
            for(j=0; j<n; j++){
                v1.push_back(original[k++]);
            }
            v.push_back(v1);
        }
        return v;
    }
};