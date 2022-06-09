class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res {0,0};
        int l = 0;
        int h = nums.size()-1;
        while(l<h){
            if(nums[l]+nums[h]==target){
                res[0] = l+1;
                res[1] = h+1;
                return res;
            }
            else if(nums[l]+nums[h]<target) l++;
            else h--;
        }
        return res;
    }
};