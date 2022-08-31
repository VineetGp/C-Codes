class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        for(auto it: nums) mp[it]++;
        int sz = nums.size();
        sz = (sz/3);
        for(auto it : mp){
            if(it.second > sz) res.push_back(it.first);
        }
        return res;
    }
};