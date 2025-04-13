class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        i=0
        while i<n:
            if nums[i]==0:
                del nums[i]
                nums.append(0)
                i-=1
                n-=1
            i+=1
        