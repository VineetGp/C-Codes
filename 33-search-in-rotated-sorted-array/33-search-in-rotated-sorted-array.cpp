class Solution {
public:
    int binarySearch(int start, int end, int target, vector<int> &nums){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
    
    int findPivot(vector<int>&nums){
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid = start + ((end-start)/2);
            if(mid < end && nums[mid] > nums[mid+1]){
                return mid;
            }
            if(mid > start && nums[mid] < nums[mid-1]){
                return mid-1;
            }
            if(nums[start] < nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        int a = binarySearch(0, pivot, target, nums);
        int b = binarySearch(pivot+1, nums.size()-1, target, nums);
        if(a*b == 1)
            return -1;
        else
            return -(a*b);
        
    }
};