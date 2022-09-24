//https://leetcode.com/problems/maximum-product-subarray/discuss/203013/C%2B%2B-O(N)-time-O(1)-space-solution-with-explanation
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxProd = 1, minProd = 1;
        int best = INT_MIN;
        for(int i : nums){
            if(i<0) swap(maxProd, minProd);
            
            maxProd = max(maxProd*i, i);
            minProd = min(minProd*i, i);
            
            best = max(best, maxProd);
        }
        return best;
    }
};