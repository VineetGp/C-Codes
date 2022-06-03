class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &arr, int sum, int i, vector<int>op, int target){
        if(i>=arr.size()) return;
        if(sum + arr[i] == target){
            op.push_back(arr[i]);
            ans.push_back(op);
            return;
        }
        if(sum + arr[i] < target){
            vector<int> op1 = op;
            vector<int> op2 = op;
            op1.push_back(arr[i]);
            solve(arr, sum+arr[i], i, op1, target);
            solve(arr, sum, i+1, op2, target);
        }
        else{
            solve(arr, sum, i+1, op, target);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        ans.clear();
        vector<int> op;
        int i = 0; 
        int sum = 0;
        sort(candidates.begin(), candidates.end());
        solve(candidates, 0, 0, op, target);
        return ans;
    }
};