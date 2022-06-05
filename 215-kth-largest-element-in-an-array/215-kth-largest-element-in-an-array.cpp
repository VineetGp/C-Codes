class Solution {
public:
    bool static comp(int a , int b){
        return a>b;
    }
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(), nums.end(), comp);
        return nums[k-1];
    }
};