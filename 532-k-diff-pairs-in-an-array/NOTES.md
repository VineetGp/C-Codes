​2. USING TWO POINTERS :
We are aware of the fact that for a pair to be counted as an answer , both the elements ( x and x+k ) , need to be in the array.
In this approach , first we sort the array and maintain 2 pointers.

1st Pointer --> 1st Element of the Pair
2nd Pointer --> 2nd Element of the Pair
We set the 1st pointer at the 0th index and 2nd pointer at the 1st index. Then ,

Move the 2nd pointer until 2nd pointer - 1st pointer >=k .
If the 2nd pointer - 1st pointer ==k , then increment the answer and move the 2nd pointer to the next greater element.
Move the 1st pointer to the next greater element.
Follow the above procedure until the 2nd pointer reaches the end of the array.

CODE :
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,j=1;
        for(i,j;i<nums.size() and j<nums.size();)
        {
            if(i==j or nums[j]-nums[i]<k)
                j++;
            else 
            {
                if(nums[j]-nums[i]==k)
                {
                    ans++;
                    j++;
                    for(;j<nums.size();j++)
                        if(nums[j]!=nums[j-1])
                            break;
                    if(j==nums.size())
                    return ans;
                    j--;                  
                }
                i++;
                while(i<j and nums[i]==nums[i-1])
                    i++;
            }
        }
        return ans;
    }
};
TIME COMPLEXITY : O(NlogN)
SPACE COMPLEXITY : O(1)

NOTE : The 2nd approach doesn't need to deal with the EDGE CASE mentioned in the 1st approach as , in the 2nd approach after finding a pair , we immediately move to the next greater element.
