class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        x = 0
        for i in set(nums):
            x = x^i
        for i in nums:
            x = x^i
        return x
        