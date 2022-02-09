class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int count = 0;
        for(int i: nums){
            m[i]++;
        }
        for(auto i: m){
            if(k==0){
                if(i.second>1)
                    count++;
            }
            else if(m.find(i.first+k)!=m.end())
                count++;
        }
        return count;
    }
};