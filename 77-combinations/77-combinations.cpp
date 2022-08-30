class Solution {
public:
    
    void solve(int index, int k, vector<int> &dummy, vector<vector<int>> &res, int n){
    
        if(dummy.size() == k){
            res.push_back(dummy);
            return;
        }
        
        for(int i = index; i<n+1; i++){
            dummy.push_back(i);
            solve(i+1, k, dummy, res, n);
            dummy.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> dummy;
        vector<vector<int>> res;
        solve(1, k, dummy, res, n);
        return res;
    }
};