class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n;
        n = nums.size();
        int prefix_sum[n];
        prefix_sum[0]=nums[0];
        for(int i=1; i<n; i++){
            prefix_sum[i] = prefix_sum[i-1]+nums[i];
        }
        unordered_map<int,int> m;
        int count = 0;
        for(int i: prefix_sum){
            if(i==k)
                count++;
            if(m.find(i-k)!=m.end())
                count+=m[i-k];
            m[i]++;
        }
        return count;
    }
};