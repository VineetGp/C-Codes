/*
https://www.youtube.com/watch?v=LPFhl65R7ww&ab_channel=TusharRoy-CodingMadeSimple
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y = nums2.size();
        if(x>y){
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int low = 0;
        int high = x;
        
        while(low<=high){
            int x_partition = (low+high)/2;
            int y_partition = (x+y+1)/2 - x_partition;
            
            int maxLeftX = (x_partition==0) ? INT_MIN : nums1[x_partition-1];
            int minRightX = (x_partition==x) ? INT_MAX : nums1[x_partition];
            
            int maxLeftY = (y_partition==0) ? INT_MIN : nums2[y_partition-1];
            int minRightY = (y_partition==y) ? INT_MAX : nums2[y_partition];
            
            if(maxLeftX<=minRightY && maxLeftY<=minRightX){
                if((x+y)%2==0){
                    return (double)(max(maxLeftX, maxLeftY) + min(minRightX, minRightY))/2;
                }
                else {
                    return (double)max(maxLeftX, maxLeftY);
                }
            }
            else if(maxLeftX>minRightY) high = x_partition-1;
            else low = x_partition+1;
        }
        return -1;
    }
};