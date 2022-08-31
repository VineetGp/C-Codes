class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        long t = target;
        int n = nums.size();
        if(n<4) return {};
        vector<vector<int>> res;
        
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++)
        {
            long a = nums[i];
            for (int j = i + 1; j < n-2; j++)
            {
                long b = nums[j];
                long c = j + 1, d = n - 1;
                while (c < d)
                {
                    if ((long) nums[c] + (long) nums[d] + a + b == t)
                    {
                        res.push_back({(int) a, (int) b, (int) nums[c], (int) nums[d]});
                        while (c < d && nums[c] == nums[c + 1] && c<n-2)
                            c++;
                        while (c < d && nums[d] == nums[d - 1])
                            d--; 
                        c++;
                        d--;
                    }
                    else if (nums[c] + nums[d] + a + b < t)
                        c++;
                    else
                        d--;
                }
                while (j < n-2 && nums[j] == nums[j + 1])
                    j++;
            }
            while (i < n-3 && nums[i] == nums[i + 1])
                i++;
        }
        return res;
    }
};