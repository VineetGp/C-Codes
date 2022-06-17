/*
https://leetcode.com/problems/majority-element/discuss/51613/O(n)-time-O(1)-space-fastest-solution
https://www.cs.utexas.edu/~moore/best-ideas/mjrty/index.html
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, val = 0;
        for(int i = 0; i<nums.size(); i++){
            if(count==0){
                count++;
                val = nums[i];
            }
            else if(nums[i]==val) count++;
            else count--;
        }
        return val;
    }
};