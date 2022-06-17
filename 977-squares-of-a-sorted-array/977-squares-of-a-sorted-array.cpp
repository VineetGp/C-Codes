class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
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