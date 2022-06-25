/*
https://www.youtube.com/watch?v=dJ7sWiOoK7g&ab_channel=NeetCode
*/
class Solution {
public:
    int jump(vector<int>& nums) {
        int left = 0, right = 0, farthest = 0, count = 0;
        while(right<nums.size()-1){
            for(int i = left; i<right+1; i++) farthest = max(farthest, i+nums[i]);
            left = right+1;
            right = farthest;
            count++;
        }
        return count;
    }
};