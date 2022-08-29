class Solution {
public:
    void func(int index, vector<int> arr,vector<int> dummy, set<vector<int>> &res){
        if(index == arr.size()){
            res.insert(dummy);
            return;
        }
        dummy.push_back(arr[index]);
        func(index+1, arr, dummy, res);
        dummy.pop_back();
        func(index+1, arr, dummy, res);
        return;
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        vector<int> dummy;
        func(0, nums, dummy, res);
        vector<vector<int>> ans;
        for(auto it : res){
            ans.push_back(it);
        }
        return ans;
    }
};