/*
https://leetcode.com/problems/kth-largest-element-in-an-array/discuss/60309/C%2B%2B-STL-partition-and-heapsort
*/
/*
O(nlogn)
class Solution {
public:
    bool static comp(int a , int b){
        return a>b;
    }
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(), nums.end(), comp);
        return nums[k-1];
    }
};
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        for(int i = 0; i<k-1; i++){
            pq.pop();
        }
        return pq.top();
    }
};
