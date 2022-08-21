class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        int res = nums[0];
        while(start<=end){
            if(nums[start]<nums[end])
                return min(res, nums[start]);
            int mid = start + (end-start)/2;
            
            res = min(nums[mid], res);
            
            if(nums[start] <= nums[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
        return res;
    }
};