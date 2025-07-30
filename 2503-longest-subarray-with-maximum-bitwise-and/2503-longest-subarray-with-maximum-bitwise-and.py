class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        maxi = max(nums)
        c=0
        v=0
        for i in nums:
            if i==maxi:
                v+=1
            else:
                v=0
            c = max(c, v)
        return c