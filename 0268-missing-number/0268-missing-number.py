class Solution(object):
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        nums.sort()
        j=0
        ans = -1
        for i in nums:
            if i!=j:
                ans=j
                break
            j+=1
        if ans==-1:
            ans=n
        return ans 