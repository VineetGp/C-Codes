class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a = nums[0];
        int b = 0;
        int n;
        n = size(nums);
        for(int i = 1; i<n; i++){
            a = a^nums[i];
        }
        for(int i=0; i<n+1; i++){
            b = b^i;
        }
        return a^b;
    }
};