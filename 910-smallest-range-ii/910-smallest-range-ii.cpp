/*
https://leetcode.com/problems/smallest-range-ii/discuss/2118698/Faster-oror-Easy-To-Understand-oror-C%2B%2B-Code
*/

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = nums[n-1]-nums[0];
        int mini, maxi;
        for(int i = 0; i<n-1; i++){
            mini = min(nums[0]+k, nums[i+1]-k);
            maxi = max(nums[n-1]-k, nums[i]+k);
            ans = min(ans, maxi-mini);
        }
        return ans;
    }
};