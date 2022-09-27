class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int i = 0, j = 1, n = nums.size();
        vector<int> diff;
        int count = 0;
        for(int k = 1; k<n ; k++){
            diff.push_back(nums[k] - nums[k-1]);
        }
        vector<int> arr;
        for(; j<diff.size(); j++){
            if(diff[j-1] == diff[j]){
                if(j-i+1 >= 2){
                    count += (j-i+1) -2 + 1;
                }
            }
            else{
                i = j;
            }
        }
        return count;
    }
};