class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero = 0
        one = 0
        two = 0
        for i in nums:
            if i==0:
                zero+=1
            elif i==1:
                one+=1
            else:
                two+=1
        for i in range(0,zero):
            nums[i] = 0
        for i in range(zero,len(nums)-two):
            nums[i] = 1
        for i in range(len(nums)-two,len(nums)):
            nums[i] = 2
        