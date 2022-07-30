class Solution {
public:
    static bool comp(const vector<int>& v1, const vector<int>& v2){
        return v1[1] > v2[1];
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }
        vector<vector<int>> v;
        for(auto it : mp){
            vector<int> temp = {it.first, it.second};
            v.push_back(temp);
        }
        vector<int> res;
        sort(v.begin(), v.end(), comp);
        for(int i = 0; i<k; i++){
            res.push_back(v[i][0]);
        }
        return res;
    }
};