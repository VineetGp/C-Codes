class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i;
        int n = nums.size();
        vector<int> l(n,1);
        vector<int> r(n,1);
        /*
        nums = [1,2,3,4]
        l(left prefix multiplication) = [1,1,2,6]
        r(right prefix multiplication) = [24,12,4,1]
        l*r = [24,12,8,6]
        */
        for(i=1; i<n; i++){
            l[i] = nums[i-1] * l[i-1]; 
        }
        for(i=n-2; i>=0; i--){
            r[i] = nums[i+1] * r[i+1]; 
        }
        for(i=0; i<n; i++){
            l[i] = l[i] * r[i];
        }
        return l;
    }
};