class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i=0, j=0; i<nums.size(); i++){
	// mp.count is used to find whether nums[i] is present in  map or not
    // eg in [1,0,1,1] 1 is inserted first time, then mp.count(1) gives false
    // then next time 1 comes, mp.count(1) gives true
            if(mp.count(nums[i]) &&  mp.size() <= k)  return true;
        
	// If not found then insert the element
            mp[nums[i]] = i;
        
	// If map size > k then remove the j th element
    // slicing window will be of size k
            if(mp.size() > k){
                mp.erase(nums[j]);
                j ++;
		    }
	    }
    return false;
    }
};