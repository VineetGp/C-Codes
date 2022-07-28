/*
https://www.youtube.com/watch?v=32Ll35mhWg0&ab_channel=takeUforward
https://www.youtube.com/watch?v=wjYnzkAhcNk&ab_channel=NeetCode
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        while(true){
            slow = nums[slow];
            fast = nums[nums[fast]];
            if(slow==fast) break;
        }
        fast = 0;
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};