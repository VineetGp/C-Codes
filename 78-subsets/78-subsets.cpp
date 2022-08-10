class Solution {
public:
    void solve(vector<int> in, vector<vector<int>>& res, vector<int> temp){
        if(in.size()==0){
            res.push_back({temp});
            return;
        }
        vector<int> out1 = temp;
        out1.push_back(in[0]);
        in.erase(in.begin()+0);
        solve(in, res, temp);
        solve(in, res, out1);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        solve(nums, res, temp);
        return res;
    }
};