class Solution {
public:
    void solve(stack<int> st, vector<vector<int>>& res, vector<int> temp){
        if(st.empty()){
            res.push_back({temp});
            return;
        }
        vector<int> op1 = temp;
        vector<int> op2 = temp;
        op2.push_back(st.top());
        st.pop();
        solve(st, res, op1);
        solve(st, res, op2);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        stack<int> st;
        for(int i = nums.size()-1; i>=0; i--){
            st.push(nums[i]);
        }
        vector<int> temp;
        vector<vector<int>> res;
        solve(st, res, temp);
        return res;
    }
};