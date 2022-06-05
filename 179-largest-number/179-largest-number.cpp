class Solution {
public:
    bool static comp(int a, int b){
        string x = to_string(a) + to_string(b);
        string y = to_string(b) + to_string(a);
        return x>y;
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), comp);
        if(nums[0]==0) return "0";
        string res;
        for(auto i : nums){
            res += to_string(i);
        }
        return res;
    }
};