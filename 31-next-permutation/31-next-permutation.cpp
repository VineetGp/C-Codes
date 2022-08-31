class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        while(i >= 0){
            if(nums[i] < nums[i+1]) break;
            i--;
        }
        if(i==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        int j = i+1;
        int mini = INT_MAX;
        int index;
        while(j < n){
            if(nums[j] > nums[i]){
                mini = min(mini, nums[j]);
                index = j;
            }
            j++;
        }
        swap(nums[i], nums[index]);
        reverse(nums.begin()+i+1, nums.end());
        return;
    }
};