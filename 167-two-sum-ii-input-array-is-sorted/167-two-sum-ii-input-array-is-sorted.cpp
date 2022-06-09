class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res {0,0};
        for(int i = 0; i<nums.size(); i++){
            int l = i+1;
            int h = nums.size()-1;
            int m;
            int n = target-nums[i];
            while(l<=h){
                m = (l+h)/2;
                if(nums[m] == n){
                    res[0] = i+1;
                    res[1] = m+1;
                    return res;
                }
                else if(nums[m] > n) h = m-1;
                else l = m+1;
            }
        }
        return res;
    }
};