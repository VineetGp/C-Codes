class Solution {
public:
    int max(int a, int b){
        if(a>b)
            return a;
        else
            return b;
    }
    int maxSubArray(vector<int>& nums) {
        int current_sum = 0;
        int max_sum = INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            current_sum += nums[i];
            current_sum = max(current_sum,nums[i]);
            max_sum = max(current_sum, max_sum);
        }
        return max_sum;
    }
};