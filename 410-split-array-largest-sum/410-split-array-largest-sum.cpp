//https://www.youtube.com/watch?v=okP-e2VpI_g&list=PL-Jc9J83PIiHhXKonZxk7gbEWsmSYP5kq&index=22&ab_channel=Pepcoding
class Solution {
public:
    
    bool isPossible(vector<int> nums, int n, int m, int max_sum){
        int splits = 1;
        int sum = 0;
        for(int i = 0; i<n; i++){
            if(sum + nums[i] > max_sum){
                sum = nums[i];
                splits++;
            }
            else{
                sum += nums[i];
            }
        }
        return (m - splits) >= 0 ? true : false;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int high = 0, n = nums.size(), low = INT_MIN;
        for(int i = 0; i<n; i++){
            low = max(low, nums[i]);
            high += nums[i];
        }
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low) / 2;
            if(isPossible(nums, n, m, mid)){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
};