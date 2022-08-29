class Solution {
public:
    void func(int index, int target, vector<int> arr, vector<vector<int>> &res, vector<int> dummy){
        if(index == arr.size()){
            if(target == 0){
                res.push_back(dummy);
            }
            return;
        }

        if(arr[index] <= target){
            dummy.push_back(arr[index]);
            func(index, target-arr[index], arr, res, dummy);
            dummy.pop_back();
        }
        func(index+1, target, arr, res, dummy);
        return;
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> dummy;
        func(0, target, candidates, res, dummy);
        return res;
        
    }
};