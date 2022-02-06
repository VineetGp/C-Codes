class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        if(nums.size()==0)
            return 0;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[j])
                continue;
            swap(nums[i],nums[j+1]);
            j++;
        }
        return j+1;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        if(nums.size()==0)
            return 0;
        for(int i = 0; i<nums.size();i++){
            if(nums[j]==nums[i])
                continue;
            else
                nums[j+1]=nums[i];
                j++;
        }
        return j+1;
    }
};
