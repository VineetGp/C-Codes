class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i = 0;
        while(i<nums.size()){
            if(nums[i] != nums[nums[i]])
                swap(nums[i], nums[nums[i]]);
            else
                i++;
        }
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!=i)
                return nums[i];
        }
        return 0;
    }
};