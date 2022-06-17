class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        if(nums.size()==1) return {nums[0]*nums[0]};
        int i = 0, j = nums.size()-1;
        vector<int> res(nums.size(),0);
        int k = res.size()-1;
        while(k>=0){
            if(abs(nums[i])>=abs(nums[j])){
                res[k] = nums[i]*nums[i];
                i++;
            }
            else{
                res[k] = nums[j]*nums[j];
                j--;
            }
            k--;
        }
        return res;
    }
};