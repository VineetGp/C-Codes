class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        j = len(nums)-2
        for i in range(len(nums)-1,0,-1):
            if(nums[i]>nums[j]):
                break
            j-=1
        if(j==-1):
            nums[:] = nums[::-1]
        else:
            for i in range(len(nums)-1,j,-1):
                if(nums[i]>nums[j]):
                    nums[i],nums[j] = nums[j], nums[i]
                    break
            nums[j+1:] = nums[-1:j:-1]
        
            
        