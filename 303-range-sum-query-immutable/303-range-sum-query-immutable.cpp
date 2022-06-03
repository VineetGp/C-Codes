class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        sum = vector<int>(n+1,0);
        int prefix_sum = 0;
        for(int i = 0; i<n; i++){
            prefix_sum += nums[i];
            sum[i+1] = prefix_sum;
        }
    }
    
    int sumRange(int left, int right) {
        left++; right++;
        return sum[right]-sum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */