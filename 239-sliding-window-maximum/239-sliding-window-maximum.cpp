class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        list<int> l;
        vector<int> res;
        while(j<n){
            
            while(l.size()>0 && l.back() < nums[j]) l.pop_back();
            l.push_back(nums[j]);
            
            if(j-i+1 < k) j++;
            
            else if(j-i+1 == k){
                res.push_back(l.front());
                
                if(nums[i] == l.front()) 
                    l.pop_front();
                
                i++; j++;
            }
        }
        return res;
    }
};