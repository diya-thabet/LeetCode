class Solution:
    def minOperations(self, nums: List[int]) -> int:
        res= 0
        for i in range(1, len(nums)):
            if nums[i-1]>=nums[i]:
                diff= nums[i-1]-nums[i]
                res+= (diff+1)
                nums[i]= nums[i] + diff +1
        return res