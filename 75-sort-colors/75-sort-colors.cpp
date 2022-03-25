class Solution {
public:
    void sortColors(vector<int>& nums) {
        int ones = 0, zeros = 0, twos = 0;
        for(int i:nums){
            if(i==0) zeros++;
            else if(i==1) ones++;
            else twos++;
        }
        for(int i=0; i<zeros; i++){
            nums[i] = 0;
        }
        for(int i=zeros; i<ones+zeros; i++){
            nums[i] = 1;
        }
        for(int i=ones+zeros; i<nums.size(); i++){
            nums[i] = 2;
        }
    }
};