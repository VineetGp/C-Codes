class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0; i<size(nums); i++){
            int a = 0;
            a = target - nums[i];
            for(int j = i+1; j<size(nums); j++){
                if(nums[j]==a){
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }
};