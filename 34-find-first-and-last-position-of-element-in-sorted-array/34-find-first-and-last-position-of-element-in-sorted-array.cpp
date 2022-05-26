class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        int low, high, mid;
        low = 0;
        high = nums.size()-1;
        int start=-1, end=-1;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target){
                start = mid;
                high = mid-1;
            }
            else if(nums[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
        res[0] = start;
        low = 0;
        high = nums.size()-1;
        while(low<=high){
            mid = (low+high)/2;
            if(nums[mid]==target){
                end = mid;
                low = mid+1;
            }
            else if(nums[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
        res[1] = end;
        return res;
    }
};