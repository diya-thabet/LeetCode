class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        l=0
        for i in range(len(nums)):
            res = [nums[i]]
            cmp = nums[i]
            for j in range(i+1, len(nums)):
                if nums[j]>cmp:
                    res.append(nums[j])
                    cmp= nums[j]
                else :
                    break
            l= max(l, len(res))
        return l

