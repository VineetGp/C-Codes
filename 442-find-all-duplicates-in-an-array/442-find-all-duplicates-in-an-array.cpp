class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto i : mp){
            if(i.second > 1) res.push_back(i.first);
        }
        return res;
    }
};