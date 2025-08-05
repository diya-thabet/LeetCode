class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        print(nums)
        res= 0
        for i in nums:
            if i>=k:
                break
            res+=1
        return res